#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int value[n + 5], weight[n + 5];
	for(int i = 1; i <= n; i++){
		cin >> weight[i] >> value[i];
	}
	int dp[n + 5][m + 5];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i <= n; i++){
		dp[i][0] = 0;
	}
	for(int i = 0; i <= m; i++){
		dp[0][i] = 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = dp[i - 1][j];
			if(weight[i] <= j)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
		}
	}
	cout << dp[n][m] << endl;
}
