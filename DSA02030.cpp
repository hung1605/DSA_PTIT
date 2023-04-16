#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30];

void in(){
	for(int i = 1; i <= k; i++){
		cout << char('A' + a[i] - 1);
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i - 1]; j <= n; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}

int main(){
	a[0] = 1;
	char c;
	cin >> c >> k;
	n = c - 'A' + 1;
	Try(1);
}