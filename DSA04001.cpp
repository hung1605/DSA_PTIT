#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

long long pow_mod(long long n, long long k){
	if(k == 0) return 1;
	long long tmp = pow_mod(n, k / 2) % mod;
	if(k % 2) return ((n % mod) * ((tmp * tmp) % mod)) % mod;
	return (tmp * tmp) % mod;
}

void testCase(){
	long long n, k; cin >> n >> k;
	cout << pow_mod(n, k) << endl; 
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}