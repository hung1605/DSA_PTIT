#include <bits/stdc++.h>
using namespace std;
int a[30];
int n;

void in(){
	bool check = false;
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			cout << 'A';
			check = true;
		}
		else cout << 'B';
	}
	if(check == false) return;
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

void testCase(){
	cin >> n;
	for(int i = 0; i < n; i++) a[i] = 0;
	next_bi(0);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

