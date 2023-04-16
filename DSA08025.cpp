#include <bits/stdc++.h>
using namespace std;

int X[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int Y[8] = {2, 2, 1, -1, -2, -2, -1, 1};

bool isinboard(int x){
	return 1 <= x and x <= 8;
}

void testCase(){
	int buoc[9][9];
	memset(buoc, 0, sizeof(buoc));
	string s, e;
	cin >> s >> e;
	int sx = s[1] - '0', sy = s[0] - 'a' + 1;
	int ex = e[1] - '0', ey = e[0] - 'a' + 1;
	queue<pair<int,int>> q;
	q.push({sx, sy});
	if(sx == ex and sy == ey){
		cout << 0 << endl;
		return;
	}
	while(!q.empty()){
		int r = q.front().first;
		int c = q.front().second;
		q.pop();
		if(r == ex and c == ey){
			cout << buoc[r][c] << endl;
			return;
		}
		else{
			for(int i = 0; i < 8; i++){
				int x = r + X[i];
				int y = c + Y[i];
				if(isinboard(x) and isinboard(y) and buoc[x][y] == 0){
					buoc[x][y] = buoc[r][c] + 1;
					q.push({x,y});
				}
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}