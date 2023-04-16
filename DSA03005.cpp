#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a + n);
		int x = 0,y = 0;
		k = min(k, n - k);
		for(int i = 0; i < k; i++) x += a[i];
		for(int i = k; i < n; i++) y += a[i];
		cout << abs(y - x) << endl;
	}
}