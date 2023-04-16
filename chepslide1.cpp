#include <bits/stdc++.h>
using namespace std;
long long dp[2000000];
void testCase(){
	int n; cin >> n;
	long long a[50][50];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	long long last = (1 << n) - 1;
	memset(dp, 0, sizeof(dp));
	for(int s = 0; s <= last; s++){
		int cnt = 0;
		for(int i = 1; i <= n; i++) if((s >> (i - 1)) & 1) cnt++;
		for(int i = 1; i <= n; i++) if((s >> (i - 1)) & 1){
			int p = s ^ (1 << (i - 1));
			dp[s] = max(dp[s], dp[p] + a[cnt][i]);
		}
	}
	cout << dp[last] << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();
	}
}