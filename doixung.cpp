#include <bits/stdc++.h>
using namespace std;
int a[30];
int n;

void in(){
	for(int i = 0; i < n; i++) cout << a[i];
	for(int i = n - 1; i >= 0; i--) cout << a[i];
	cout << " ";
}

void next_bi(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1) in();
		else next_bi(i + 1);
	}
}

void testCase(){
	int m; cin >> m;
	for(int k = 1; k <= m / 2; k++){
		n = k;
		next_bi(0);
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

