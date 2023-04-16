#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;

void testCase(){
	int n; cin >> n;
	ll a[n];
	priority_queue<ll, vector<ll>, greater<ll> > q;
	for(auto &i : a){
		cin >> i;
		q.push(i % mod);
	}
	ll ans = 0;
	while(q.size() > 1){
		ll first = q.top(); q.pop();
		ll second = q.top(); q.pop();
		ll len = (first + second) % mod;
		q.push(len);
		ans = (ans + len) % mod;
	}
	cout << ans << endl;
	q.pop();
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}