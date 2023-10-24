#include <bits/stdc++.h>
using namespace std;

int n, s, t[35], ans;

void Try(int i, int val, int cnt){
	// cout << "i = " << i << "; val = " << val << "; cnt = " << cnt << endl;
	if(i >= n or val >= s or cnt >= ans){
		if(val == s) ans = min(ans, cnt);
		return;
	}
	Try(i + 1, val, cnt);
	Try(i + 1, val + t[i], cnt + 1);
}

void testCase(){
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> t[i];
	ans = 1e9;
	Try(0, 0, 0);
	cout << (ans == 1e9 ? -1 : ans) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}