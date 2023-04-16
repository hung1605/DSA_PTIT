#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int pre = a[0], res = a[0];
	for(int i = 1; i < n; i++){
		pre = max(a[i], pre + a[i]);
		res = max(res, pre);
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}