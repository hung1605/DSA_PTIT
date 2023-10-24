#include <bits/stdc++.h>
using namespace std;

int V,E;
int parent[100005];
int size[100005];
int ans;

void make_set(int v){
	parent[v] = v;
}

void init(){
	for(int i = 1; i <= V; i++){
		make_set(i);
		size[i] = 1;
	}
}

int find_set(int v){
	return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}

void Union(int a, int b){
	a = find_set(a);
	b = find_set(b);
	if(a == b) return;
	if(size[a] < size[b]) swap(a, b);
	parent[b] = a;
	size[a] += size[b];
	ans = max(ans, size[a]);
}

void testCase(){
	cin >> V >> E;
	ans = 0;
	init();
	for(int i = 1; i <= E; i++){
		int u,v; cin >> u >> v;
		Union(u, v);
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}