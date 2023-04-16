#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool chuaxet[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	cout << u << " ";
	chuaxet[u] = false;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int t : adj[v])
			if(chuaxet[t]){
				chuaxet[t] = false;
				cout << t << " ";
				q.push(t);
			}
	}
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
	BFS(start);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}