#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(auto &i : a) cin >> i;
	map<int,int> mp;
	int index = n + 1;
	for(int i = n - 1; i >= 0; i--){
		mp[a[i]]++;
		if(mp[a[i]] > 1){
			index = min(index, i);
		}
	}
	if(index < n) cout << a[index] << endl;
	else cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}