#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n,x; cin >> n >> x;
	int a[n];
	for(int &i : a) cin >> i;
	stable_sort(a,a+n,[x](int a, int b){
		return abs(x - a) < abs(x - b);
	});
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}