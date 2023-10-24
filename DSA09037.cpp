#include <bits/stdc++.h>
using namespace std;

int k, n, m;
int K[105];
vector<int> List[1005];
bool chuaxet[1005];
int deg[1005];

void DFS(int u){
	chuaxet[u] = false;
	deg[u] ++;
	for(int v : List[u]){
		if(chuaxet[v]) DFS(v);
	}
}

int main(){
	memset(deg, 0, sizeof(deg));
	cin >> k >> n >> m;
	for(int i = 1; i <= k; i++) cin >> K[i];
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
	}
	for(int i = 1; i <= k; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		DFS(K[i]);
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(deg[i] == k) cnt ++;
	}
	cout << cnt;
}