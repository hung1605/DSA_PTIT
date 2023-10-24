#include <bits/stdc++.h>
using namespace std;

int V,E,start;
vector<int> List[1005];
bool chuaxet[1005];
vector<pair<int,int>> span_tree;

void DFS(int u){
	chuaxet[u] = false;
	for(auto v : List[u]){
		if(chuaxet[v]){
			span_tree.push_back({u,v});
			DFS(v);
		}
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	cin >> V >> E >> start;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	memset(chuaxet, true, sizeof(chuaxet));
	span_tree.clear();
	DFS(start);
	for(int i = 1; i <= V; i++){
		if (chuaxet[i]){
			cout << -1 << endl;
			return;
		}
	}
	for(auto i : span_tree){
		cout << i.first << " " << i.second << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}