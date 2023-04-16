#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long pow_mod(long long a, long long b){
	if(b == 0) return 1;
	long long temp = pow_mod(a, b / 2) % mod;
	if(b % 2 == 0) return (temp * temp) % mod;
	return (((temp * temp) % mod) * (a % mod)) % mod;
}

int main(){
	long long a = 1, b = 1;
	while(true){
		cin >> a >> b;
		if(a == 0 and b == 0) break;
		cout << pow_mod(a , b) << endl;
	}
}