#include <bits/stdc++.h>
using namespace std;

int V,E;
vector<int> List[1005];
int color[1005];

bool DFS(int u){
	color[u] = 1;
	for(int v : List[u]){
		if(color[v] == 0){
			if(DFS(v)) return true;	
		} 
		else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}

void testCase(){
	for(auto &i : List) i.clear();
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v); 
	}
	memset(color, 0, sizeof(color));
	for(int i = 1; i <= V; i++){
		if(color[i] == 0){
			if(DFS(i)){
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