#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	int l = 0, r = n - 1;
	while(l <= r){
		if(l == r){
			cout << a[l];
			break;	
		} 
		cout << a[r] << " ";
		r--;
		cout << a[l] << " ";
		l++;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();
	}
}