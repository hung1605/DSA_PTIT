#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int a[n];
	int count = 0;
	for(int &x : a){
		cin >> x;
		if(x == k) count++;
	} 
	if(count) cout << count << endl;
	else cout << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}