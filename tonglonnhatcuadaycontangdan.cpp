#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	long long res = 0;
	long long f[n];
	for(auto &x : a) cin >> x;
	for(int i = 0; i < n; i++){
		f[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[j] < a[i])
				f[i] = max(f[i], f[j] + a[i]);
		}
		res = max(res,f[i]);
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}