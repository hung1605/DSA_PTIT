#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n,value; cin >> n >> value;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	binary_search(a.begin(),a.end(),value) ? cout << 1 << endl: cout << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}