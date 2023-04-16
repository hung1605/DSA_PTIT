#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	set<int> s;
	for(auto &x : a){
		cin >> x;
		s.insert(x);	
	} 
	sort(a, a + n);
	cout << a[n - 1] - a[0] - s.size() + 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}