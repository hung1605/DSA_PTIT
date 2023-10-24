#include <bits/stdc++.h>
using namespace std;

int V,E,m;
bool check;
vector<int> List[15];
int color[15];

void checking(){
	for(int u = 1; u <= V; u++){
		for(auto v : List[u]){
			if(color[u] == color[v]) return;
		}
	}
	check = true;
}

void coloring(int index){
	for(int j = 1; j <= m; j++){
		color[index] = j;
		if(index == V){
			checking();
		}
		else coloring(index + 1);
		color[index] = 0;
	}
}

void testCase(){
	check = false;
	for(auto &i : List) i.clear();
	cin >> V >> E >> m;
	for(int i = 1; i <= E; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	memset(color, 0, sizeof(color));
	coloring(1);
	cout << (check ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}