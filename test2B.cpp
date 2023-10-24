#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void Test_case(){
	int dp[100][1005];
	memset(dp, 0, sizeof(dp));
	int n, p;
	cin >> n >> p;
	if(1 > p or p > 9*n){
		cout << 0 <<endl;
		return;
	}
	for(int i = 1; i <= 9; i++){
		dp[1][i] = 1;
	}
	for(int i = 1; i <= n; i++){
		dp[i][1] = 1;
	}
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= 9*i; j++){
			for(int k = 0; k <= min(9,j); k++){
				dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % mod;
			}
		}
	}
	cout << dp[n][p] << endl;
}


int main(){
	int t; cin >> t;
	while(t--) Test_case();
}
