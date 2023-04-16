#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(auto &i : a){
		cin >> i;
		mp[i]++;
	}
	for(auto cap : mp){
		if(cap.second > n / 2){
			cout << cap.first << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}