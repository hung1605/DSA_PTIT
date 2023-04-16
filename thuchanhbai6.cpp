#include <bits/stdc++.h>
using namespace std;

int a[1005][1005], buoc[1005][1005];

void testCase(){
	memset(a, 0, sizeof(a));
	memset(buoc, 0, sizeof(buoc));
	int n, m; cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	queue<pair<int,int>> q;
	q.push({1, 1});
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if(x == n and y == m){
			cout << buoc[n][m] << endl;
			return;
		}
		int phai = 0, xuong = 0, cheo = 0;
		int tmp;
		tmp = abs(a[x + 1][y] - a[x][y]);
		if(tmp <= m - x) phai = tmp;
		
		tmp = abs(a[x][y + 1] - a[x][y]);
		if(tmp <= n - y) xuong = tmp;
		
		tmp = abs(a[x + 1][y + 1] - a[x][y]);
		if(tmp <= n - y and tmp <= m - x) cheo = tmp;
		
		if(phai > 0 and buoc[x + phai][y] == 0){
			q.push({x + phai, y});
			buoc[x + phai][y] = buoc[x][y] + 1;
		}
		if(xuong > 0 and buoc[x][y + xuong] == 0){
			q.push({x, y + xuong});
			buoc[x][y + xuong] = buoc[x][y] + 1;
		}
		if(cheo > 0 and buoc[x + cheo][y + cheo] == 0){
			q.push({x + cheo, y + cheo});
			buoc[x + cheo][y + cheo] = buoc[x][y] + 1;
		}
	}
	if(buoc[n][m] == 0) cout << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

