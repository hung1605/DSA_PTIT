#include <bits/stdc++.h>
using namespace std;

int dp[10];

void testCase(){
	int a, b;
	cin >> a >> b;
	memset(dp, 0, sizeof(dp));
	for(int i = a; i <= b; i++){
		string s = to_string(i);
		for(char x : s) dp[x - '0']++;
	}
	for(auto x : dp) cout << x << " ";
	cout << endl;
}

int main(){

	int t; cin >> t;
	while(t--) testCase();
}