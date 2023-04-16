#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	map<int,int> mp;
	for(int &x : a){
		mp[x]++;
	}
	int count = 0;
	for(int x : a){
		if(x == k - x) count += mp[x] - 1;
		else count += mp[k - x];
	}
	cout << count / 2 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}