#include <bits/stdc++.h>
using namespace std;

void next_combination(int *a, int n, int k){
	for(int i = k - 1; i >= 0; i--){
		if(a[i] == n + i - k + 1) continue;
		a[i]++;
		for(int j = i + 1; j < k; j++) a[j] = a[j - 1] + 1;
		break;
	}
	for(int i = 0; i < k; i++) cout << a[i];
	cout << " ";
}

void testCase(){
	int n, k; cin >> n >> k;
	int *a = new int [k];
	for(int i = 0; i < k; i++){
		a[i] = i + 1;
		cout << a[i];
	}
	cout << " ";
	while(true){
		next_combination(a, n, k);
		if(a[0] == n - k + 1) break;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}