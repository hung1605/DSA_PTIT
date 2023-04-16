#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long mod_exponential(long long n, long long k){
	if(k == 0) return 1;
	long long temp = mod_exponential(n, k / 2) % mod;
	if(k % 2) return ( ((temp * temp) % mod) * n ) % mod;
	return (temp * temp) % mod;
}

long long reverse(long long n){
	long long dao = 0;
	while(n){
		dao = dao * 10 + n % 10;
		n /= 10;
	} return dao;
}

void testCase(){
	long long n; cin >> n;
	cout << mod_exponential(n,reverse(n)) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

