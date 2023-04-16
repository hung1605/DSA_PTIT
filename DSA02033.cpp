#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
bool chua_xet[100];

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

bool check(){
	for(int i = 1; i < n; i++){
		if(abs(a[i] - a[i + 1]) == 1) return false;
	}
	return true;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(chua_xet[j]){
			a[i] = j;chua_xet[j] = false;
			if(i == n){
				if(check()) in();
			}
			else Try(i + 1);
			chua_xet[j] = true;
		}
	}
}

void testCase(){
	cin >> n;
	for(int i = 1; i <= n; i++) chua_xet[i] = true;
	Try(1);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

