#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(auto i : adj[u]){
		if(chuaxet[i]) DFS(i);
	}
}

void testCase(){
	int V,E;
	cin >> V >> E;
	memset(chuaxet, true, sizeof(chuaxet));
	for(auto &i : adj) i.clear();
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int q; cin >> q;
	while(q--){
		int start, end;
		cin >> start >> end;
		DFS(start);
		cout << (chuaxet[end] ? "NO\n" : "YES\n");
		memset(chuaxet, true, sizeof(chuaxet));
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}