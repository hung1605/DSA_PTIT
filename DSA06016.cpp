#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n,m; cin >> n >> m;
	int a[n],b[m];
	int small = 1e9, big = -1e9;
	for(int &x : a){
		cin >> x;
		big = max(big, x);
	}
	for(int &x : b){
		cin >> x;
		small = min(small, x);
	} 
	cout << (long long)big * small << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}