#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[30], c[30];
int OK;

void in(int i){
	cout << "[";
	for(int j = 1; j < i; j++) cout << c[j] << " ";
	cout << c[i];
	cout << "]";
	// cout << " "; <output ko co dau cach giua 2 ngoac vuong [2 2 2 2][2 2 4][2 6][4 4][8]>
}

void Try(int i, int sum){
	for(int j = 1; j <= n; j++){
		if(c[i - 1] <= a[j] and sum + a[j] <= x){
			c[i] = a[j]; sum += a[j];
			if(sum == x){
				OK = 1; in(i);
			}
			else Try(i + 1, sum);
			sum -= c[i];
		}
	}
}

void testCase(){
	OK = 0;
	cin >> n >> x;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1,0);
	if(!OK) cout << -1;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}