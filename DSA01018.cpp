#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int a[1005];
	a[0] = 0;
	for(int i = 1; i <= k; i++) cin >> a[i];
	if(a[k] == k){
		for(int i = 1; i <= k; i++)
			cout << n - k + i << " ";
		cout << endl;
		return;
	}
	for(int i = k; i >= 1; i--){
		if(a[i] > i and a[i] - 1 > a[i - 1]){
			a[i]--;
			for(int v = i + 1; v <= k; v++){
				a[v] = n - k + v;
			}
			break;
		}
	}
	for(int i = 1; i <= k; i++) cout << a[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}