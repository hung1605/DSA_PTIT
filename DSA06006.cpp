#include <bits/stdc++.h>
using namespace	std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	for(int &x : a) cout << x << " ";
	cout << endl;
}	

int main(){
	int t; cin >> t;
	while(t--) testCase();
}