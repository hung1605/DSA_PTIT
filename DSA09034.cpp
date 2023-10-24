#include <bits/stdc++.h>
using namespace std;

int X[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[8] = {1, 1, 1, 0, -1, -1, -1, 0};
char a[105][105];
int n, m;

bool valid(int row, int col){
 return 1 <= row and row <= n and 1 <= col and col <= m and a[row][col] == 'W';
}

void loang(int row, int col){
	a[row][col] = 0;
	for(int i = 0; i < 8; i++){
		int x = row + Y[i];
		int y = col + X[i]; 
		if(valid(x, y)) loang(x, y);
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 'W'){
				cnt ++;
				loang(i, j);
			}
		}
	}
	cout << cnt;
}
