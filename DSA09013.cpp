#include <bits/stdc++.h>
using namespace std;

bool chuaxet[1000];
vector<int> adj[1000];
vector<pair<int,int>> dsc;

void DFS(int u, int s, int t){
	chuaxet[u] = false;
	for(auto v : adj[u]){
		if((u == s and v == t) or (u == t and v == s)) continue;
		if(chuaxet[v]) DFS(v, s, t);
	}
}

void testCase(){
	for(auto &i : adj) i.clear();
	dsc.clear();
	int V, E;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		dsc.push_back({u, v});
	}
	memset(chuaxet, true, sizeof(chuaxet));
	int tplt = 0;
	for(int i = 1; i <= V; i++){
		if(chuaxet[i]){
			tplt++;
			DFS(i, 0, 0);
		}
	}
	for(auto canh : dsc){
		memset(chuaxet, true, sizeof(chuaxet));
		int cnt = 0;
		int s = canh.first, t = canh.second;
		for(int i = 1; i <= V; i++){
			if(chuaxet[i]){
				cnt++;
				DFS(i, s, t);
			}
		}
		if(tplt < cnt) cout << s << " " << t << " ";	
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
