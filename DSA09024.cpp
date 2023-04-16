#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];

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
				chuaxet[t] = false;
				q.push(t);
			}
		}
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
	BFS(start);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
