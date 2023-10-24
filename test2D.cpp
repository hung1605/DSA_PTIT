#include <bits/stdc++.h>
using namespace std;

int par[1005], sz[1005];
void make_set(){
	for(int i = 1; i <= 1005; i++){
		par[i] = i;
		sz[i] = 1;
	}
}

int find(int u){
	if(u != par[u]) return find(par[u]);
	return u;
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b){
		return true;
	}
	if(sz[a] < sz[b]){
		par[a] = b;
		sz[b] += sz[a];
	}
	else{
		par[b] = a;
		sz[a] += sz[b];
	}
	return false;
}

void Test_case(){
	make_set();
	int v,e;
	cin >> v >> e;
	bool ans = false;
	for(int i = 0; i < e; i++){
		int u, v;
		cin >> u >> v;
		if(Union(u, v) == true){
			ans = true;
		}
	}
	cout << (ans ? "YES\n" : "NO\n");
}


int main(){
	int t; cin >> t;
	while(t--) Test_case();
}
