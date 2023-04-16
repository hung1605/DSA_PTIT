#include<bits/stdc++.h>
using namespace std;

void testCase(){
	long long n; cin >> n;
	long long a[n];
	for(long long &x : a) cin >> x;
	sort(a, a + n);
	long long num[10];
	num[1] = a[n - 1] * a[n - 2];
	num[2] = num[1] * a[n - 3];
	num[3] = a[0] * a[1];
	num[4] = num[3] * a[2];
	num[5] = num[3] * a[n - 1];
	num[6] = a[0] * a[n - 1];
	long long res = -1e9;
	for(long long i = 1; i < 7; i++){
		res = max (res,num[i]);
	}
	cout << res;
}

int main(){
	int t = 1;
	while(t--) testCase();
}