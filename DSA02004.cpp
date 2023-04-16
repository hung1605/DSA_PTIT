#include <bits/stdc++.h>
using namespace std;
int n;
int ok;
int a[100][100];

void findPath(int row, int col, string s){
	if(row == n - 1 and col == n - 1){
		ok = 1;
		cout << s << " ";
	} 
	if(a[row + 1][col] == 1 and row < n - 1 and col <= n - 1){
		a[row + 1][col] = 0;
		findPath(row + 1, col, s + "D");
		a[row + 1][col] = 1;
	}
	if(a[row][col - 1] == 1 and row <= n - 1 and col > 0){
		a[row][col - 1] = 0;
		findPath(row, col - 1, s + "L");
		a[row][col - 1] = 1;
	}
	if(a[row][col + 1] == 1 and row <= n - 1 and col < n - 1){
		a[row][col + 1] = 0;
		findPath(row, col + 1, s + "R");
		a[row][col + 1] = 1;
	}
	if(a[row - 1][col] == 1 and row > 0 and col <= n - 1){
		a[row - 1][col] = 0;
		findPath(row - 1, col, s + "U");
		a[row - 1][col] = 1;
	}
}

void testCase(){
	cin >> n;
	ok = 0;
	string s = "";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	if(a[0][0] == 0){
		cout << -1 << endl;
		return;
	}
	a[0][0] = 0;
	findPath(0, 0, s);
	if(!ok){
		cout << -1;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}