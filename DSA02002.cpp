#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[20][20];
	for(int i = 1; i <= n; i++){//[1 2 3 4 5]
		cin >> a[1][i];
	}
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= n - i + 1; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j + 1]; //[48] [20 28] [8 12 16] [3 5 7 9 ] [1 2 3 4 5 ]
		}
	}
	for(int i = n; i >= 1; i--){
		cout << '[';
		for(int j = 1; j <= n - i + 1; j++){
			cout << a[i][j];
			if(j != n - i + 1) cout << " ";
		}
		cout << "] ";
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}