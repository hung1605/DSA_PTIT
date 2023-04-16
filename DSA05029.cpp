#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	int dp[100];
	s = 'm' + s;
	if(s[1] == '0'){
		cout << 0 << endl;
		return;
	}
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i < (int)s.size(); i++){
		if(s[i] == '0'){
			if(s[i - 1] != '1' and s[i - 1] != '2'){
				cout << 0 << endl;
				return;
			}
			dp[i] = dp[i - 2];
		}
		else{
			dp[i] = dp[i - 1];
			if(s[i - 1] == '1' or (s[i - 1] == '2' and s[i] <= '6' and s[i] >= '1'))
				dp[i] = dp[i - 1] + dp[i - 2];
		}
	}
	cout << dp[s.size() - 1] << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}