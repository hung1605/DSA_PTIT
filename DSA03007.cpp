#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long n; cin >> n;
	long long a[n],b[n];
	for(long long i = 0; i < n; i++) cin >> a[i];
	for(long long i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + n, [](long long a, long long b){
		return a > b;
	});
	long long sum = 0;
	for(long long i = 0; i < n; i++) sum += a[i]*b[i];
	cout << sum << endl;
}

int main(){
	long long t; cin >> t;
	while(t--) testCase();
}