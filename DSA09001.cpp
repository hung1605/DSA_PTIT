#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];

void testCase(){
	for(auto &i : List) i.clear();
	int V, E;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	for(int i = 1; i <= V; i++){
		cout << i << ": ";
		for(auto j : List[i])
			cout << j << " ";
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
