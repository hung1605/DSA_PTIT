#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long dp[100000];

void testCase(){
	int n, k; 
	cin >> n >> k;
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		long long sum = 0;
		for(int j = 1; j <= min(i, k); j++){
			sum += dp[i - j];
			sum %= mod;
		}
		dp[i] = sum;
	}
	cout << dp[n] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}