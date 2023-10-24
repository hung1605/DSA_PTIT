#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	if(n % 2 == 1){
		cout << a[n / 2] << endl;	
	}
	else cout << a[(n - 1) / 2] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
/*
b1 quay lui, nhanh can 
b2 tham lam, qhd
b3 stack, queue
b4 graph
b5 trong so graph, tree
*/