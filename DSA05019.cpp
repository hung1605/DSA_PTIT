#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, m; cin >> n >> m;
	int a[n + 5][m + 5];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	int dp[n][m];
	int ans = 0;
	for(int i = 0; i < m; i++) dp[0][i] = a[0][i];
	for(int i = 0; i < n; i++) dp[i][0] = a[i][0];
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(a[i][j] == 0) dp[i][j] = 0;
			else dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
			ans = max(ans, dp[i][j]);
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}