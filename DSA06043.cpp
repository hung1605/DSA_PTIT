#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	int l = 0, r = 0;
	for(auto &i : a){
		cin >> i;	
		r +=i;
	} 
	for(int i = 0; i < n; i++){
		l += a[i];
		if(l == r){
			cout << i + 1 << endl;
			return;
		}
		r -= a[i];
	}
	
	cout << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}