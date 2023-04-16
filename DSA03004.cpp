#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	long long a[n];
	for(long long &x : a) cin >> x;
	sort(a, a + n);
	long long num1 = 0, num2 = 0;
	for(int i = 0; i < n; i +=2){//0 3 4 5 7
		num1 = num1*10 + a[i];
	}
	for(int i = 1; i < n; i+= 2){
		num2 = num2*10 + a[i];
	}
	cout << num2 + num1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}