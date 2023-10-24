#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s;
	cin >> s;
	int len = s.size();
	int dp[105][105];
	memset(dp, 0, sizeof(dp));
	for(int i = len - 1; i >= 0; i--){
		for(int j = i + 1; j < len; j++){
			if(j == i + 1){
				if(s[i] == s[j]) dp[i][j] = 0;
				else dp[i][j] = 1;
			}
			else if(s[i] == s[j]){
				dp[i][j] = dp[i + 1][j - 1];
			}
			else{
				dp[i][j] = min(dp[i + 1][j] + 1, dp[i][j - 1] + 1);
			}
		}
	}
	// for(int i = 0; i < len; i++){
	// 	for(int j = 0; j < len; j++){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << dp[0][s.size() - 1] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}