#include <bits/stdc++.h>
using namespace	std;

void testCase(){
	int n,m;
	cin >> n >> m;
	set<int> a,b,c;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		a.insert(x);
		c.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		b.insert(x);
		c.insert(x);
	}
	for(int x : c) cout << x << " ";
	cout << endl;
	for(int x : a){
		if(b.find(x) != b.end()) cout << x << " ";
	}
	cout << endl;
}	

int main(){
	int t; cin >> t;
	while(t--) testCase();
}