#include <bits/stdc++.h>
using namespace std;
int n, k, binary[20], cnt;
int ans[100000][20];

void print(){
	for(int i = 1; i <= cnt; i++){
		for(int j = 1; j <= n; j++){
			if(ans[i][j]) cout << "A";
			else cout << "B";
		}
		cout << endl;
	}
}

bool check(){
	int dem = 0;
	for(int i = 1; i <= n - k + 1; i++){
		int tmp = 0;
		for(int j = 0; j < k; j++){
			if(binary[i + j] == 1) tmp++;
		}
		if(tmp == k) dem ++;
	}
	return dem == 1;
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		binary[i] = j;
		if(i == n){
			if(check()){
				cnt++;
				for(int k = 1; k <= n; k++) ans[cnt][k] = binary[k];
			} 
		} 
		else Try(i + 1);
	}
}

int main(){
	cnt = 0;
	cin >> n >> k;
	Try(1);
	cout << cnt << endl;
	print();
}