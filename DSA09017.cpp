#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> List[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(int v : List[u])
		if(chuaxet[v]) DFS(v);
}

void testCase(){
	for(auto &i : List) i.clear();
	cin >> N;
	for(int i = 1; i < N; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	memset(chuaxet, true, sizeof(chuaxet));
	DFS(1);
	for(int i = 1; i <= N; i++){
		if(chuaxet[i]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}