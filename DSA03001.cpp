#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int dem = 0;
	int n; cin >> n;
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(n){
		if(n == 1 or n == 2 or n == 5 or n == 10 or n == 20 or n == 50 or n == 100 or n == 200 or n == 500 or n == 1000){
			dem ++;
			break;
		}
		int maxValue = 1;
		for(int x : a){
			if(n > x) maxValue = x;
		}
		dem += n / maxValue;
		n = n % maxValue;
	}
	cout << dem << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}