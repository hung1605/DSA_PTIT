#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(binary_search(a + j + 1, a + n, k - a[i] - a[j]) == true){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}