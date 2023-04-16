#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long n, k; cin >> n >> k;
	long long a[n];
	for(auto &i : a)
		cin >> i;
	sort(a, a + n);
	long long dem = 0;
	for(int i = n - 1; i >= 0; i--){
		int tmp = lower_bound(a, a + i, a[i] - k + 1) - a;
		dem += i - tmp;
	}
	cout << dem << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}