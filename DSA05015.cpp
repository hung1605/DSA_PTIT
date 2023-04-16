#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void testCase(){
	int n, k;
	cin >> n >> k;
	if(k > n){
		cout << 0 << endl;
		return;
	}
	long long ans = 1;
	for(int i = 0; i < k; i++){
		ans *= (n - i);
		ans %= mod;
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}