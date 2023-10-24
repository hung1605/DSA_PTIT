#include <bits/stdc++.h>
using namespace std;

int V,E;
vector<int> List[1005];
vector<int> topo;
int in[1005];


void kahn(){
	queue<int> q;
	for(int i = 1; i <= V; i++){
		if(in[i] == 0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u = q.front(); q.pop();
		topo.push_back(u);
		for(int v : List[u]){
			in[v]--;
			if(in[v] == 0) q.push(v);
		}
	}
	for(auto i : topo) cout << i << " ";
}

int main(){
	cin >> V >> E;
	memset(in, 0, sizeof(in));
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		in[v]++;
	}
	kahn();
}