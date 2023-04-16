#include <bits/stdc++.h>
using namespace std;

long long fibo[100];

void sinh(){
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i < 93; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

long long ditgit(long long n, long long k){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(k <= fibo[n - 2]) return ditgit(n - 2, k);
	return ditgit(n - 1, k - fibo[n - 2]);	
}

void testCase(){
	long long n, k;
	cin >> n >> k;
	cout << ditgit(n, k) << endl;
}

int main(){
	sinh();
	long long t; cin >> t;
	while(t--) testCase();
}