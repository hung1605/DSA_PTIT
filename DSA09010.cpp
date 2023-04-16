#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(int v : List[u]){
		if(chuaxet[v]) DFS(v);
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	int V, E;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
	}
	for(int i = 1; i <= V; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		DFS(i);
		for(int j = 1; j <= V; j++){
			if(chuaxet[j]){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
