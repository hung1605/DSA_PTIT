#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	float a[505], b[505];
	int ans = 0, dp[505];
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
		dp[i] = 1;
		for(int j = 1; j < i; j++){
			if(a[j] < a[i] and b[j] > b[i]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}