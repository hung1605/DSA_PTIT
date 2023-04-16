#include <bits/stdc++.h>
using namespace std;

void testCase(){
	vector<int> adj[1000];
	int V, E;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	for(int i = 1; i <= V; i++){
		cout << i << ": ";
		for(auto j : adj[i]) cout << j << " ";
		cout << endl; 
	}	
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
