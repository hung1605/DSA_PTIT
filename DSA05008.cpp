#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, s; cin >> n >> s;
	int a[n];
	for(auto &i : a) cin >> i;
	bool dp[40005];
	for(auto &x : dp) x = false;
	dp[0] = true;
	for(int i = 0; i < n; i++){
		for(int j = s; j > 0; j--){
			if(j >= a[i] and dp[j - a[i]]) dp[j] = true;
		}
	}
	if(dp[s]) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}