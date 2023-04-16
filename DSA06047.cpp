#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	long long a[n];
	for(auto &i : a){
		cin >> i;
		i *= i;	
	} 
	sort(a,a + n);
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(binary_search(a + j + 1, a + n, a[i] + a[j]) == true){
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