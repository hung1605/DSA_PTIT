#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a + n);
	long long result = 0;
	for(int i = 0; i < n; i++){
		int temp =  (i * a[i]) % mod;
		result = (result + temp) % mod;
	}
	cout << result << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}