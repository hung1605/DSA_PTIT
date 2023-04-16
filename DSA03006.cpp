#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	bool posible = true;
	sort(b,b + n);
	for(int i = 0; i < n; i++){
		if(b[i] != a[i] and b[i] != a[n - i - 1]){
			posible = false;
			break;
		}
	}
	if(posible) cout << "Yes";
	else cout << "No";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}