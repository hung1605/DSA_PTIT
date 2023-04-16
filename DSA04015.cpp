#include <bits/stdc++.h>
using namespace std;

int floor(int a[], int low, int high, int x){
	int mid = (low + high)/2;
	if(x == a[mid]) return mid;
	if(x < a[1]){
		return -1;
	}
	if(a[mid] < x){
		if(x < a[mid + 1]) return mid;
		return floor(a, mid + 1, high, x);
	} 
	return floor(a, low, mid - 1, x);
}

void testCase(){
	int n, x; cin >> n >> x;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	cout << floor(a, 1, n ,x) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}