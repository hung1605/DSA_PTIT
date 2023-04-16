#include <bits/stdc++.h>
using namespace std;
int n;
vector<bool> chuaxet(20,true);
int *a = new int[20];
int s[200000][20];

int factorial(int n){
	int f = 1;
	for(int i = 2; i <= n; i++) f*=i;
	return f;
}

void in(){
	for(int i = factorial(n); i >= 1; i--){
		for(int j = 1; j <= n; j++){
			cout << s[i][j];
		}
		cout << " ";
	}
	cout << endl;
}

void Try(int i, int &count){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			a[i] = j; chuaxet[j] = false;
			if(i == n){
				for(int k = 1; k <= n; k++){
					s[count][k] = a[k];
				}
				count++;
			}
			else Try(i + 1,count);
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	int count = 1;
	cin >> n;
	for(int i = 1; i <= n; i++) a[i] = i;
	Try(1, count);
	in();
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}