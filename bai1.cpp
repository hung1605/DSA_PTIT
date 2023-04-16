#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long p; cin >> p;
	vector<int> v;
	if(p < 10){
		cout << p << endl;
		return;
	}
	for(int i = 9; i >= 2; i--){
		if(p % i == 0){
			while(p % i == 0){
				v.push_back(i);
				p /= i;
			}
		}
	}
	if(v.size() == 0 or p != 1) cout << -1 << endl;
	else {
		sort(v.begin(),v.end());
		for(auto x : v) cout << x;
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}