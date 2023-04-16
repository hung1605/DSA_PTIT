#include <bits/stdc++.h>
using namespace std;

int n,k;
string a[10];
int x[10];
bool chuaxet[10];
int ans;

void cal(){
	string tmp[10];
	for(int i = 1; i <= n; i++){
		tmp[i] = "";
		for(int j = 0; j < k; j++){
			tmp[i] += a[i][x[j]];
		}
	}
	int top = 0, bot = 1e9;
	for(int i = 1; i <= n; i++){
		top = max(top, stoi(tmp[i]));
		bot = min(bot, stoi(tmp[i]));
	}
	ans = min(ans, top - bot);
}

void Try(int i){
	for(int j = 0; j < k; j++){
		if(chuaxet[j]){
			x[i] = j;chuaxet[j] = false;
			if(i == k - 1){
				cal();
				// for(int z = 0; z < k; z ++)
				// 	cout << x[z];
				// cout << endl;
			}
			else Try(i + 1);
			chuaxet[j] = true;
		}
		
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i <= 10; i++) chuaxet[i] = true;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	ans = 1e9;
	Try(0);
	cout << ans;
}
