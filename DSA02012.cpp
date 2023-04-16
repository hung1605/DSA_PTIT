#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int row, col; cin >> row >> col;
	int a[120][120], dp[120][120];
	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= col; j++) cin >> a[i][j];
	}
	for(int i = 1; i <= col; i++) dp[1][i] = 1;
	for(int i = 1; i <= row; i++) dp[i][1] = 1;
	for(int i = 2; i <= row; i++){
		for(int j = 2; j <= col; j++) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	}
	cout << dp[row][col] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}