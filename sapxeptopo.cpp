#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];
vector<int> topo;

void DFS(int u){
	chuaxet[u] = false;
	for(auto v : List[u]){
		if(chuaxet[v]) DFS(v);
	}
	topo.push_back(u);
}

int main(){
	for(auto &i : List) i.clear();
	int V, E; cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
	}
	memset(chuaxet, true, sizeof(chuaxet));
	for(int i = 1; i <= V; i++){
		if(chuaxet[i]) DFS(i);
	}
	reverse(topo.begin(), topo.end());
	for(auto i : topo){
		cout << i << " ";
	}
}