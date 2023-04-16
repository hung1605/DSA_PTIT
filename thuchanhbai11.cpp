#include <bits/stdc++.h>
using namespace std;

vector<int> List[10005];
bool chuaxet[10005];
vector<pair<int,int>> dsc;

void DFS(int u, int s, int t){
	chuaxet[u] = false;
	for(auto v : List[u]){
		if((u == s and v == t) or (u == t and v == s)) continue;
		if(chuaxet[v]) DFS(v, s, t);
	}
}

void testCase(){
	for(auto &i : List) i.clear();
	int N, M;
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
		dsc.push_back({u, v});
	}
	memset(chuaxet, true, sizeof(chuaxet));
	int tplt = 0;
	for(int i = 1; i <= N; i++){
		if(chuaxet[i]){
			tplt++;
			DFS(i, 0, 0);
		}
	}
	int dinhtru = 0, canhcau = 0;
	for(int i = 1; i <= N; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		chuaxet[i] = false;
		int cnt = 0;
		for(int j = 1; j <= N; j++){
			if(chuaxet[j]){
				cnt++;
				DFS(j, 0, 0);
			}
		}
		if(tplt < cnt) dinhtru++;
	}
	for(auto canh : dsc){
		memset(chuaxet, true, sizeof(chuaxet));
		int cnt = 0;
		int s = canh.first, t = canh.second;
		for(int i = 1; i <= N; i++){
			if(chuaxet[i]){
				cnt++;
				DFS(i, s, t);
			}
		}
		if(tplt < cnt) canhcau++;	
	}
	cout << dinhtru << " " << canhcau;
}

int main(){
	testCase();
}

