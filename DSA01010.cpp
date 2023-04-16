#include <bits/stdc++.h>
using namespace std;

int numberOfDifference(int a[], int n, int k){
	set<int> b;
	for(int i = 1; i <= k; i++) b.insert(a[i]);

	int i = k;
	while(a[i] == n - k + i and i > 0) i--;
	if(i == 0) return k;
	int x = a[i];
	for(int j = i; j <= k; j++){
		a[j] = x + j - i + 1;
	}
	int count = 0;
	set<int> c;
	for(int i = 1; i <= k; i++) c.insert(a[i]);
	for(auto x : b) if(c.find(x) == c.end()) count ++;

	return count;
}

void testCase(){
	int n, k;
	cin >> n >> k;
	int a[k + 1];
	for(int i = 1; i <= k; i++) cin >> a[i];
	cout << numberOfDifference(a, n , k) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();	
}