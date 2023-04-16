#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long dp[1000000];
void testCase(){
	int n,k; cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	long long a[n + 5];
	for(int i = 1; i <= n; i++){
		cin >> a[i];	
	} 
	dp[0] = 1;// bai toan co so
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){
			if(i >= a[j]){
				dp[i] += dp[i - a[j]];
				dp[i] %= mod;
			}
		}
	}
	// for(int i = 1; i <= k; i++) cout << dp[i] << " ";
	// cout << endl;
	cout << dp[k] << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) testCase();
}