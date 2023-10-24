#include <bits/stdc++.h>
using namespace std;

int V,E,start;
vector<int> List[1005];
bool chuaxet[1005];
vector<pair<int,int>> span_tree;

void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int t : List[v]){
			if(chuaxet[t]){
				span_tree.push_back({v,t});
				chuaxet[t] = false;
				q.push(t);
			}
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
	BFS(start);
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