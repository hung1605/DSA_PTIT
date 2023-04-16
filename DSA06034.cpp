#include <bits/stdc++.h>
using namespace std;

long long cal(long long n){
	return n * (n - 1);
}

void testCase(){
	long long n, k;
	cin >> n >> k;
	map<long long,int> mp;
	set<long long> s;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x] ++;
		s.insert(x);
	}
	long long cnt = 0;
	for(auto item : s){
		if(s.find(k - item) != s.end() and *s.find(k - item) != item)
			cnt += mp[item] * mp[k - item];
		else if(s.find(k - item) != s.end() and *s.find(k - item) == item)
			cnt += cal(mp[item]);
	}
	cout << cnt / 2 << endl;
	// for(auto x : mp){
	// 	cout << x.first << " " << x.second << '\n';
	// }
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}