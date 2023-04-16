#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int sum = 1e7;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(abs(a[i] + a[j]) < abs(sum))
				sum = a[i] + a[j];
		}
	}
	cout << sum << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}