#include <bits/stdc++.h>
using namespace std;

long long fibo[100];

void constructor(){
	fibo[1] = fibo[2] = 1;
	for(int i = 3; i <= 92; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
}

char value_of_index(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= fibo[n - 2]) return value_of_index(n - 2, k);// 1 1 2 3 5
	return value_of_index(n - 1, k - fibo[n - 2]);
}


void testCase(){
	long long n, k;
	cin >> n >> k;
	cout << value_of_index(n, k) << endl;
}

int main(){
	constructor();
	int t; cin >> t;
	while(t--) testCase();
}