#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	cout << u << " ";
	for(int v : List[u]){
		if(chuaxet[v]) DFS(v);
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	int V, E, start;
	cin >> V >> E >> start;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
	}
	memset(chuaxet, true, sizeof(chuaxet));
	DFS(start);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
