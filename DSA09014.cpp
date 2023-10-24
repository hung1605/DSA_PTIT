#include <bits/stdc++.h>
using namespace std;

int V, E;
vector<int> List[1005];
bool chuaxet[1005];

bool DFS(int u, int par){
	chuaxet[u] = false;
	for(auto v : List[u]){
		if(chuaxet[v]){
			if(DFS(v, u)) return true;
		}
		else if(v != par) return true;
	}
	return false;
}

bool BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	memset(chuaxet, true, sizeof(chuaxet));
	for(int i = 1; i <= V; i++){
		if(chuaxet[i]){
			if(DFS(i, 0)){
				cout << "YES\n";
				return;
			}	
		}
	}
	cout << "NO\n";
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}