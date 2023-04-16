#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[20];

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

bool check(){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]) count++;
	}
	if(count == k) return true;
	return false;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			if(check()) in();
		}
		else Try(i + 1);
	}
}

void testCase(){
	cin >> n >> k;
	Try(1);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}