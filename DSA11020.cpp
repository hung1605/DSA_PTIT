#include <bits/stdc++.h>
using namespace std;

void testCase(){
	set<int> s;
	int n; cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	if(s.size() < n){
		cout << 0 << endl;
		return;
	}
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			cout << 0 << endl;
			return;
		}
	}
	cout << 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}