#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, m; cin >> n >> m;
	int a[n][m], buoc[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			buoc[i][j] = 0;
		}
	queue<pair<int,int>> q;
	q.push({0,0});
	while(!q.empty()){
		pair<int,int> toado = q.front();
		q.pop();
		int i = toado.first, j = toado.second;
		int len = a[i][j];
		if(i == n - 1 and j == m - 1){
			cout << buoc[n - 1][m - 1] << endl;
			return;
		}
		if(i + len < n and buoc[i + len][j] == 0){
			q.push({i + len, j});
			buoc[i + len][j] = buoc[i][j] + 1;
		}
		if(j + len < m and buoc[i][j + len] == 0){
			q.push({i,j + len});
			buoc[i][j + len] = buoc[i][j] + 1;
		}
	}
	if(buoc[n - 1][m - 1] == 0) cout << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}