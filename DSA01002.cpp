#include <bits/stdc++.h>
using namespace	std;

void testCase(){
	int n, k;
	cin >> n >> k;
	int a[k];
	for(int &x : a) cin >> x;
	bool check = true;
	for(int i = k - 1; i >= 0; i--){
		if(a[i] == n + i - k + 1) continue;
		a[i]++; check = false;
		for(int j = i + 1; j < k; j++) a[j] = a[j - 1] + 1;
		break;
	}
	if(check){
		for(int i = 0; i < k; i++) a[i] = i + 1;
	}
	for(int &x : a) cout << x << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}