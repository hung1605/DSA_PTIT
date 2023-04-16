#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
void testCase(){
	int n; cin >> n;
	vector<vector<long long>> X(105, vector<long long> (15));
	for(int j = 0; j <= 9; j++) X[1][j] = 1;
	for(int i = 1; i <= n; i++) X[i][0] = 1;

	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= 9; j++) X[i][j] = (X[i][j - 1] % mod + X[i - 1][j] % mod) % mod;
	}
	long long ans = 0;

	for(int i = 0; i <= 9; i++) ans = (ans % mod + X[n][i] % mod) % mod;
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}