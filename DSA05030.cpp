#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, m;
	cin >> n >> m;
	long long dp[50][50];
	for(int i = 1; i <= max(n, m); i++){
		dp[i][0] = dp[0][i] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	cout << dp[n][m] << endl;
}

int main() {
	int t; cin >> t;
	while(t--) testcase();
}
