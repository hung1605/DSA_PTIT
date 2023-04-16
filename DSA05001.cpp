#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
void testCase(){
	string a,b;
	cin >> a >> b;
	int len_a = a.size(), len_b = b.size();
	for(int i = 1; i <= len_b; i++){
		for(int j = 1; j <= len_a; j++){
			if(b[i - 1] == a[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
		cout << endl;
	}
	cout << dp[len_b][len_a] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
