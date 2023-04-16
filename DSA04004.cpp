#include <bits/stdc++.h>
using namespace std;

int value_of_index(int n, long long k){
	if(k == pow(2, n - 1)) return n;
	if(k < pow(2, n - 1)) return value_of_index(n - 1, k);
	return value_of_index(n - 1, k - pow(2, n - 1));
}


void testCase(){
	long long n, k;
	cin >> n >> k;
	cout << value_of_index(n, k) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}