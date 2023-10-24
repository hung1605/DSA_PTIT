#include <bits/stdc++.h>
using namespace std;

void Test_case(){
	int n; cin >> n;
	int a[n];
	for(auto &i : a) cin >> i;
	int dp[n];
	dp[0] = a[0];
	int maxx = 0;
	for(int i = 1; i < n; i++){
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		maxx = max(maxx, dp[i]);
	}
	cout << maxx << endl;
}


int main(){
	int t; cin >> t;
	while(t--) Test_case();
}
