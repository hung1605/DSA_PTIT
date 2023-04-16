#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	int dp[n + 5];
	dp[1] = x;
	for(int i = 2; i <= n; i++){
		if(i % 2 == 0){
			dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
		}
		else{
			dp[i] = min(dp[i / 2] + x + z, min(dp[i - 1] + x, dp[i / 2 + 1] + z + y));
		}
	}
	cout << dp[n] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}