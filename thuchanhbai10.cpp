#include <bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(int v : List[u])
		if(chuaxet[v]) DFS(v);
}

void testCase(){
	for(auto &i : List) i.clear();
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	int tplt_max = 0, dinh_tru = 0;
	for(int i = 1; i <= n; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		chuaxet[i] = false;
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(chuaxet[j]){
				cnt++;
				DFS(j);
			}
		}
		if(tplt_max < cnt){
			tplt_max = cnt;
			dinh_tru = i;
		}
	}
	if(tplt_max == 1) cout << 0 << endl;
	else cout << dinh_tru << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

