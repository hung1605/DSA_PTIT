#include <bits/stdc++.h>
using namespace std;
int a[20];
int s[200000][20];
int n, k;
void next_combination(int i, int &count){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			count++;
			for(int p = 1; p <= k; p++){
				s[count][p] = a[p];
			}
		}
		else next_combination(i + 1,count);
	}
}

void in(int count){
	for(int i = count; i>= 1; i--){
		for(int j = 1; j <= k ; j++){
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
}

void testCase(){
	int count = 0;
	cin >> n >> k;
	a[0] = 0;
	for(int i = 1; i <= k; i++) a[i] = i;
	next_combination(1,count);
	in(count);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

