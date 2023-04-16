#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];

void testCase(){
	for(auto &i : List) i.clear();
	int V, E;
	cin >> V >> E;
	int in[1005] = {};
	int out[1005] = {};
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		out[u]++;
		in[v]++;
	}
	for(int i = 1; i <= V; i++){
		if(out[i] != in[i]){
			cout << 0 << endl;
			return;
		}
	}
	cout << 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}