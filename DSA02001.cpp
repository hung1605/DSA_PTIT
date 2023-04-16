#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[20][20];
	for(int i = 1; i <= n; i++){//[1 2 3 4 5]
		cin >> a[1][i];
	}
	cout << "[";
	for(int i = 1; i <= n; i++){//[1 2 3 4 5]
		cout << a[1][i];
		if(i != n) cout << " ";
	}
	cout << "]\n";
	for(int i = 2; i <= n; i++){
		cout << "[";
		for(int j = 1; j <= n - i + 1; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j + 1]; 
			cout << a[i][j];
			if(j != n - i + 1) cout << " ";
		}
		cout << "]\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}