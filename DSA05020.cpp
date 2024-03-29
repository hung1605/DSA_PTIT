#include <bits/stdc++.h>
using namespace std;

int a[1005][1005], dp[1005][1005];

void testCase(){
	int n, m; cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	dp[0][0] = a[0][0];
	for(int i = 1; i < n; i++){
		dp[i][0] = dp[i - 1][0] + a[i][0];
	}
	for(int i = 1; i < m; i++){
		dp[0][i] = dp[0][i - 1] + a[0][i];
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + a[i][j];
		}
	}
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < n; j++){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << dp[n - 1][m - 1] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}