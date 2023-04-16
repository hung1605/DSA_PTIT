#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	vector<int> dp(n, 1);
	int result = 1;
	
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] >= a[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
		result = max(result, dp[i]);
	}

	cout << n - result << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}