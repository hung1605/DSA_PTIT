#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];
int parent[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(int v : List[u]){
		if(chuaxet[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}

void BFS(int u){
	chuaxet[u] = false;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		cout << v << " ";
		q.pop();
		for(auto t : List[v]){
			if(chuaxet[t]){
				parent[t] = v;
				chuaxet[t] = false;
				q.push(t);
			}
		}
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	memset(chuaxet, true, sizeof(chuaxet));
	memset(parent, 0, sizeof(parent));
	int V, E, start, finish;
	cin >> V >> E >> start >> finish;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
	}
	DFS(start);
	if(chuaxet[finish]){
		cout << -1 << endl;
		return;
	}
	vector<int> path;
	int tmp = finish;
	while(start != tmp){
		path.push_back(tmp);
		tmp = parent[tmp];
	}
	path.push_back(tmp);
	reverse(path.begin(), path.end());
	for(auto i : path) cout << i << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
