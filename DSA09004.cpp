#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	cout << u << " ";
	for(auto v : adj[u])
		if(chuaxet[v]) DFS(v);
}

void testCase(){
	int V,E,start;
	cin >> V >> E >> start;
	for(auto &i : adj) i.clear();
	memset(chuaxet, true, sizeof(chuaxet));
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	DFS(start);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}