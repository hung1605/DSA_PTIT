#include <bits/stdc++.h>
using namespace std;
int a[30];
int n;
char c;
void in(){
	for(int i = 0; i < n; i++){
		if(a[i] == 0) cout << 'O';
		else cout << 'X';
	}
	cout << endl;
}

bool check(){
	int size_x = 0;
	int size_o = 0;
	int tempx = 0, tempo = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			tempo++; size_o = max(size_o,tempo);
			tempx = 0;
		}
		else{
			tempx++; size_x = max(size_x, tempx);
			tempo = 0;
		}
	}
	if(c == 'X'){
		if(size_x > size_o and size_x > 4) return true;
		return false;
	}
	else{
		if(size_o > size_x and size_o > 4) return true;
		return false;
	}
}

void next_bi(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1){
			if(check()) in();
		}
		else next_bi(i + 1);
	}
}

void testCase(){
	cin >> n >> c;
	for(int i = 0; i < n; i++) a[i] = 0;
	next_bi(0);
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}

