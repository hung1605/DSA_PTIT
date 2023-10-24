#include <bits/stdc++.h>
using namespace std;

int X[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

int n, m;
int a[505][505];

bool isInside(int a, int b){
	return 1 <= a and a <= n and 1 <= b and b <= m;
}

void loang(int x, int y){
	a[x][y] = 0;
	for(int i = 0; i < 8; i++){
		int row = x + Y[i];
		int col = y + X[i];
		if(isInside(row, col) and a[row][col] == 1)
			loang(row, col);
	}
}

void testCase(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				cnt++;
				loang(i, j);
			}
		}
	}
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}