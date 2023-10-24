#include <bits/stdc++.h>
using namespace std;

vector<int> List[25];
bool chuaxet[25];
int V, E;
bool check;

void Hamilton(int u, int cnt){
	if(cnt == V){
		check = true; 
		return;
	}
	for(auto v : List[u]){
		if(chuaxet[v]){
			chuaxet[v] = false;
			Hamilton(v, cnt + 1);
			chuaxet[v] = true;
		}
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	check = false;
	cin >> V >> E;
	for(int i = 0; i < E; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	for(int i = 1; i <= V; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		chuaxet[i] = false;
		Hamilton(i, 1);
	}
	cout << (check ? "1\n" : "0\n");
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}