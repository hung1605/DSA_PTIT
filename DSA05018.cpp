#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	int len = s.size();
	bool dp[len][len];
	int ans = 0;
	memset(dp,false, sizeof(dp));
	for(int i = len - 1; i >= 0; i--){
		for(int j = i; j < len; j++){
			if(i == j) dp[i][j] = true;
			else if(s[i] == s[j]){
				if(j - i == 1) dp[i][j] = true;
				else dp[i][j] = dp[i + 1][j - 1];
			}
			if(dp[i][j]) ans = max(ans, j - i + 1);
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;	
	while(t--) testCase();
}