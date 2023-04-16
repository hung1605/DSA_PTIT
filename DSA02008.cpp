#include <bits/stdc++.h>
using namespace std;

int n, k, X[20], chuaxet[20], C[20][20], ans[20000][20], sophuongan;

void in(){
	for(int i = 1; i <= sophuongan; i++){
		for(int j = 1; j <= n; j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}
}

bool check(){
	int sum = 0, dem = 1;
	for(int i = 1; i <= n; i++){
		sum += C[i][X[i]];
	}
	return sum == k;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			X[i] = j;chuaxet[j] = false;
			if(i == n){
				if(check()){
					sophuongan++;
					for(int i = 1; i <= n; i++)
						ans[sophuongan][i] = X[i];
				} 
			}
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	cin >> n >> k;
	sophuongan = 0;
	for(int i = 1; i <= n; i++){
		chuaxet[i] = true;
		for(int j = 1; j <= n; j++) cin >> C[i][j];
	}
	Try(1);
	cout << sophuongan << endl;
	in();
}

int main(){
	int t = 1;
	while(t--) testCase();
}