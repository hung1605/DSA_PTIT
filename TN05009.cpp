#include <bits/stdc++.h>
using namespace std;

int V,E;
vector<int> List[1005];
int parent[1005];
bool chuaxet[1005];
bool check;

int en;

void DFS(int u){
	if(check == true) return;
	chuaxet[u] = false;
	for(int v : List[u]){
		if(chuaxet[v]){
			parent[v] = u;
			DFS(v);
		}
		else if(v == 1 and parent[u] != v){
			check = true;
			en = u;
		}
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	check = false;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u,v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	for(int i = 1; i <= V; i++) sort(List[i].begin(), List[i].end());
	memset(chuaxet, true, sizeof(chuaxet));
	for(int i = 1; i <= V; i++) parent[i] = i;
	DFS(1);
	if(!check){
		cout << "NO\n";
		return;
	}
	stack<int> cycle;
	cycle.push(1);
	int tmp = en;
	while(tmp != parent[tmp]){
		cycle.push(tmp);
		tmp = parent[tmp];
	}
	cycle.push(1);
	while(!cycle.empty()){
		cout << cycle.top() << " ";
		cycle.pop();
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}