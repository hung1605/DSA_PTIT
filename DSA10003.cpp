#include <bits/stdc++.h>
using namespace std;

int V,E;
int parent[100005];
bool check;

void init(){
	for(int i = 1; i <= V; i++){
		parent[i] = i;
	}
}

int find_set(int v){
	return parent[v] == v ? v : parent[v] = find_set(parent[v]);
}

void Union(int a, int b){
	a = find_set(a);
	b = find_set(b);
	if(a == b){
		check = true;
		return;
	}
	parent[b] = a;
}

void testCase(){
	check = false;
	cin >> V >> E;
	init();
	for(int i = 1; i <= E; i++){
		int u, v;
		cin >> u >> v;
		Union(u,v);
	}
	cout << (check ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
} 
