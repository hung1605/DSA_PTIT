#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n + 5][n + 5] = {};
	cin.ignore();
	string s;
	for(int i = 1; i <= n; i++){
		getline(cin, s);
		stringstream ss(s);
		int x;
		while(ss >> x){
			a[i][x] = 1;
			a[x][i] = 1;
		}
	}
	for(int i = 1; i <= n; i++)
		for(int j = i + 1; j <= n; j++)
			if(a[i][j]) cout << i << " " << j << endl;
}
