#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int dp[1005][1005];
void testCase(){
	int n, k; cin >> n >> k;
	for(int i = 0; i <= k; i++) dp[0][i] = 0;
	for(int i = 0; i <= n; i++) dp[i][0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod; 
		}
	}
	cout << dp[n][k] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}