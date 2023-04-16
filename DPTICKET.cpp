#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int t[100000], r[100000];
	for(int i = 1; i <= n; i++) cin >> t[i];
	for(int i = 1; i <= n - 1; i++) cin >> r[i];
	int dp[100000];
	dp[1] = t[1];
	dp[2] = min(t[1] + t[2], r[1]);
	for(int i = 3; i <= n; i++){
		dp[i] = min(dp[i - 1] + t[i], dp[i - 2] + r[i - 1]);
	}
	cout << dp[n];
}