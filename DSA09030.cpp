#include <bits/stdc++.h>
using namespace std;

int V, E;
vector<int> List[1005];
bool chuaxet[1005];
int parent[1005];


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
	chuaxet[u] = false;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(auto t : List[v]){
			if(chuaxet[t]){
				q.push(t);
				chuaxet[t] = false;
				parent[t] = v;
			}
			else if(parent[v] != t) return true;
		}
	}
	return false;
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
	memset(parent, 0, sizeof(parent));
	for(int i = 1; i <= V; i++){
		if(chuaxet[i]){
			if(BFS(i)){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}