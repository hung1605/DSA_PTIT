#include <bits/stdc++.h>
using namespace std;

struct fence{
	int row1,col1,row2,col2;
};

int X[4] = {0, 1, 0, -1};
int Y[4] = {-1, 0, 1, 0};
int n, k, m;
int a[105][105];
fence hangrao[10005];
int number_of_sheep[10005];

bool valid(int row, int col, int x, int y){
	if(x < 1 or x > n or y < 1 or y > n) return false;
	if(a[x][y] == -1) return false;
	for(int i = 1; i <= m; i++){
		int r1 = hangrao[i].row1;
		int c1 = hangrao[i].col1;
		int r2 = hangrao[i].row2;
		int c2 = hangrao[i].col2;
		if(row == r1 and col == c1 and r2 == x and c2 == y) 
			return false;
		if(x == r1 and y == c1 and row == r2 and col == c2)
			return false;
	}
	return true;
}

void loang(int row, int col, int tplt){
	if(a[row][col] == 1) number_of_sheep[tplt]++;
	a[row][col] = -1;
	for(int i = 0; i < 8; i++){
		int x = row + Y[i];
		int y = col + X[i];
		if(valid(row, col, x, y)) loang(x, y, tplt);
	}
}

int main(){
	memset(a, 0, sizeof(a));
	memset(number_of_sheep, 0, sizeof(number_of_sheep));
	cin >> n >> k >> m;
	for(int i = 1; i <= m; i++){
		int u, v, x, y;
		cin >> u >> v >> x >> y;
		hangrao[i].row1 = u;
		hangrao[i].col1 = v;
		hangrao[i].row2 = x;
		hangrao[i].col2 = y;
	}
	for(int i = 1; i <= k; i++){
		int x, y; 
		cin >> x >> y;
		a[x][y] = 1;
	}
	int tplt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] != -1){
				tplt++;	
				loang(i, j, tplt);
			} 
		}
	}
	int ans = 0;
	for(int i = 1; i <= tplt; i++){
		for(int j = i + 1; j <= tplt; j++){
			ans += number_of_sheep[i] * number_of_sheep[j];
		}
	}
	cout << ans;
}