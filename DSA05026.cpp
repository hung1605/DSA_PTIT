#include <bits/stdc++.h>
using namespace std;
int dp[105][25005], c, n, W[1000];
int main(){
	cin >> c >> n;
	for(int i = 1; i <= n; i++) cin >> W[i];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= c; j++){
			dp[i][j] = dp[i - 1][j];
			if(W[i] <= j)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - W[i]] + W[i]);
		}
	}
	cout << dp[n][c] << endl;
}