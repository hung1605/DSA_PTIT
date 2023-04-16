#include<bits/stdc++.h>
using namespace std;

int mod = 123456789;

long long pow_mod(long long n){
	if(n == 0) return 1;
	long long tmp = pow_mod(n / 2) % mod;
	if(n % 2) return (2 * ((tmp * tmp) % mod)) % mod;
	return (tmp * tmp) % mod;
}

void testCase(){
	long long n; cin >> n;
	cout << pow_mod(n - 1) << endl; 
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}