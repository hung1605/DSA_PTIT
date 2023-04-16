#include <bits/stdc++.h>
using namespace std;

int X[20], n;
bool ok;

void in(int i){
	for(int j = 1; j <= i; j++)
		cout << (X[j] ? 9 : 0);
}

bool check(int i){
	long long sum = 0;
	for(int j = 1; j <= i; j++){
		sum = sum * 10 + (X[j] ? 9 : 0);	
	}
	return sum % n == 0;
}

void Try(int i, int len){
	if(ok) return;
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == len){
			if(check(i)){
				in(i);
				ok = true;	
			}
		}
		else Try(i + 1, len);
	}
}

void testCase(){
	ok = false;
	cin >> n;
	if(n == 9 or n == 3 or n == 1){
		cout << 9 << endl;
		return;
	}
	X[1] = 9;
	for(int k = 2; k <= 18; k++) Try(2, k);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}