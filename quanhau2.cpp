#include <bits/stdc++.h>
using namespace std;

int chess_board[100][100], cau_hinh[100], ans;
vector<bool> hang(100), xuoi(100), nguoc(100);
//cot[j] == 1 and xuoi[i - j + 8] == 1 and nguoc[i + j - 1] == 1

int tinh_diem(){
	int sum = 0;
	for(int i = 1; i <= 8; i++)
		sum += chess_board[cau_hinh[i]][i];// 
	return sum;
}

void Try(int i){
	for(int j = 1; j <= 8; j++){
		if(hang[j] and xuoi[i - j + 8] and nguoc[i + j - 1]){
			cau_hinh[i] = j;
			hang[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = false;
			if(i == 8) ans = max(ans, tinh_diem());
			else Try(i + 1);
			hang[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = true;
		}
	}
}

void testCase(){
	for(int i = 1; i < 100; i++)
		hang[i] = xuoi[i] = nguoc[i] = true;
	ans = 0;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++) cin >> chess_board[i][j];
	}
	Try(1);
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}