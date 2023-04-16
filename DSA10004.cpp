#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];

void testCase(){
	for(auto &i : List) i.clear();
	int V, E;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	int cnt = 0;
	for(int i = 1; i <= V; i++){
		if(List[i].size() % 2){
			cnt ++;
		}
	}
	if(cnt == 0){
		cout << 2 << endl;
		return;
	}
	else if(cnt == 2){
		cout << 1 << endl;
		return;
	}
	cout << 0 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}