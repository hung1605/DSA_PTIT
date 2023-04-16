#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void testCase(){
	int n, k; cin >> n >> k;
	long long dp[n + 5][k + 5];
	for(int i = 1; i < 10; i++) dp[1][i] = i;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= k; j++){
			for(int k = 0; k <= 9; k++){
				if(k <= j){
					dp[i][j] += dp[i - 1][j - k];
					dp[i][j] %= mod;
				}
				else break;
			}
		}
	}
	cout << dp[n][k] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}