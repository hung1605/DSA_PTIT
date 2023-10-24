#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;

	int a = 0, b = 0;
	bool flag = false;
	for(int i = 0; i <= n / 4; i++){
		if((n - 4*i) % 7 == 0){
			flag = true;
			a = i;
			break;
		}
	}
	b = (n - 4*a) / 7;
	if(!flag){
		cout << -1 << endl;
		return;
	}
	for(int i = 0; i < a; i++) cout << 4;
	for(int i = 0; i < b; i++) cout << 7;

	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}