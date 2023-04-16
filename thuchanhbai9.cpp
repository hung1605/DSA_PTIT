#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];
int parent[1005];


void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int t : List[v]){
			if(chuaxet[t]){
				q.push(t);
				chuaxet[t] = false;
				parent[t] = v;
			}
		}
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	int n, m, start;
	cin >> n >> m >> start;
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	for(int i = 1; i <= n; i++){
		if(i == start) continue;
		memset(chuaxet, true, sizeof(chuaxet));
		memset(parent, 0, sizeof(parent));
		BFS(start);
		if(chuaxet[i]){
			cout << "No path" << endl;
			continue;
		}
		int tmp = i;
		vector<int> path;
		while(tmp != start){
			path.push_back(tmp);
			tmp = parent[tmp];
		}
		path.push_back(tmp);
		reverse(path.begin(), path.end());
		for(auto i : path) cout << i << " ";
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

