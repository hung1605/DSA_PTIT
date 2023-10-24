#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void testCase(){
	int n; cin >> n;
	long long dp[105][10];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++)
		dp[i][0] = 1;
	for(int i = 0; i <= 9; i++)
		dp[1][i] = 1;
	
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= 9; j++){
			for(int k = 0; k <= j; k++){
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mod;
			}
			// cout << "dp[" << i <<"][" << j <<"] " <<  dp[i][j] << endl;
		}
	}
		

		
	long long ans = 0;
	for(int i = 0; i <= 9; i++)
		ans = (ans + dp[n][i]) % mod;
	
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}