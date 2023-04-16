#include <bits/stdc++.h>
using namespace std;

int n;
int c[30];
int ans[100][100];
int OK;

void Try(int i, int sum, int &dem){
	for(int j = n; j >= 1; j--){
		if(c[i - 1] >= j and sum + j <= n){
			c[i] = j; sum += j;
			if(sum == n){
				dem++;
				OK = 1;
				for(int k = 1; k <= i; k++){
					ans[dem][k] = c[k];
				}
				ans[dem][0] = i;
			}
			else Try(i + 1, sum, dem);
			sum -= c[i];
		}
	}
}

void testCase(){
	int dem = 0;
	OK = 0;
	cin >> n;
	c[0] = n;
	Try(1,0,dem);
	cout << dem << endl;
	for(int i = 1; i <= dem; i++){
		cout << "(";
		int inedx_phantucuoi = ans[i][0];
		for(int j = 1; j < inedx_phantucuoi; j++){
			cout << ans[i][j] << " ";
		}
		cout << ans[i][inedx_phantucuoi] << ") ";
	}
	if(!OK) cout << -1;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}