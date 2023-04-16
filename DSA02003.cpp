#include <bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
bool flag;

void Try(int row, int col, string s){
	if(row == n and col == n){
		cout << s << " ";
		flag = true;
	} 
	if(row < n and a[row + 1][col] == 1){
		Try(row + 1, col, s + "D");
	}
	if(col < n and a[row][col + 1] == 1)
		Try(row, col + 1, s + "R");
}

void testCase(){
	flag = false;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	if(a[1][1] == 0){
		cout << -1 << endl;
		return;
	}
	Try(1, 1, "");
	if(flag == false) cout << -1 << endl;
	else cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}