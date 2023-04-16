#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(auto &i : a) cin >> i;
	sort(a, a + n);
	int ans = 1e9;
	for(int i = 1; i < n; i++){
		ans = min(ans, a[i] - a[i -1]);
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}