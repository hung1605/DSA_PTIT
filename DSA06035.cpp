#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n], l[n] = {0}, r[n] = {0};
	int ans = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	l[0] = 1;
	for(int i = 1; i < n; i++){
		if(a[i - 1] < a[i]) l[i] = l[i - 1] + 1;
		else l[i] = 1;
	}
	r[n - 1] = 1;
	for(int i = n - 2; i >= 0; i--){
		if(a[i] > a[i + 1]) r[i] = r[i + 1] + 1;
		else r[i] = 1;
	}
	for(int i = 0; i < n; i++){
		ans = max(ans, l[i] + r[i] - 1);
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}