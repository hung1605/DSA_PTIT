#include <bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
void testCase(){
	string s;
	cin >> s;
	int len = s.size();
	int ans = 1;
	memset(dp, false, sizeof(dp));
	for(int i = 0; i < len; i++)
		dp[i][i] = true;

	for(int i = 0; i < len - 1; i++){
		if(s[i] == s[i + 1]) dp[i][i + 1] = true;
		if(dp[i][i + 1]) ans = max(ans,2);
	}

	for(int i = len - 1; i >= 0; i--){
		for(int j = i + 2; j < len; j++){
			if(s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
			if(dp[i][j]) ans = max(ans, j - i + 1);
		}
	}
	// for(int i = 0; i < len; i++){
	// 	for(int j = 0; j < len; j++){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
