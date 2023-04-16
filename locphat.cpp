#include <bits/stdc++.h>
using namespace std;
int a[30];
int n;
void in(){
	for(int i = 0; i < n; i++){
		if(a[i] == 0) cout << 6;
		else cout << 8;
	}
	cout << " ";
}
void next_bi(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1)
			in();
		else next_bi(i + 1);
	}
}
int factorial(){
	int f = 1;
	for(int i = 1; i <= n; i++) f *= 2;
	return f;
}
void testCase(){
	cin >> n;
	for(int i = 0; i < n; i++) a[i] = 0;
	cout << factorial() << endl;
	next_bi(0);
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}

