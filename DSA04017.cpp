#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	long long a[n],b[n - 1];
	for(long long &x : a) cin >> x;
	for(long long &x : b) cin >> x;
	bool ok = true;
	for(int i = 0; i < n - 1; i++){
		if(a[i] != b[i]){
			cout << i + 1 << endl;
			ok = false;
			break;
		}
	}
	if(ok){
		cout << a[n - 1] << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}