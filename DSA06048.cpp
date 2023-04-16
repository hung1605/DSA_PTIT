#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	long long a[n];
	for(auto &i : a)
		cin >> i;
	int ans = 0;
	int cnt = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] <= a[i + 1]) cnt++;
		else break;
	}
	if(cnt != n) cout << cnt;
	else cout << ans;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}