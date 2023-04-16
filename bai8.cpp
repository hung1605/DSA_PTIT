#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int dp[205];
	int ans = 0;
	for(int i = 0; i < (int)s.size(); i++) dp[i] = 1;
	for(int i = 1; i < (int)s.size(); i++){
		for(int j = 0; j < i; j++){
			if(s[j] <= s[i]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
}