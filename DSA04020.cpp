#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int x, ok = -1;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x == k) ok = i;
	}
	if(ok == -1) cout << "NO" << endl;
	else cout << ok  + 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}