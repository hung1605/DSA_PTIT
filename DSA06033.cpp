#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int rightMax[n];
	rightMax[n - 1] = a[n - 1];
	for(int i = n - 2; i >= 0; i--){
		rightMax[i] = max(rightMax[i + 1], a[i]);
	}
	int i = 0, j = 0;
	int maxDistance = -1;
	while(i < n and j < n){
		if(a[i] < rightMax[j]){
			maxDistance = max(maxDistance, j - i);
			j++;
		}
		else i++;
	}
	cout << maxDistance << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}