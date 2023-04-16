#include <bits/stdc++.h>
using namespace std;

int n;
int c[100];

void print(int i){//(4) (3 1) (2 2) (2 1 1) (1 1 1 1)
	cout << "(";
	for(int j = 1; j < i; j++){
		cout << c[j] << " ";
	}
	cout << c[i] << ") ";
}

void Try(int i, int sum){
	for(int j = n; j >= 1; j--){
		if(c[i - 1] >= j and sum + j <= n){
			c[i] = j; 
			sum += j;
			if(sum == n){
				print(i);
			}
			else Try(i + 1, sum);
			sum -= j;
		}
	}
}

void testCase(){
	cin >> n;
	c[0] = n;
	Try(1, 0);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}