#include <bits/stdc++.h>
using namespace std;

int n, a[20][20], x[20], chuaxet[20], chiphi, ans[20], chiphitamthoi, cmin; 

void Try(int i){
	if(chiphitamthoi + cmin * (n - i + 1) >= chiphi) return;
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			x[i] = j;chuaxet[j] = false;
			chiphitamthoi += (i == 1 ? 0 : a[x[i - 1]][x[i]]);
			if(i == n){
				if(chiphitamthoi< chiphi){
					for(int k = 1; k <= n; k++) ans[k] = x[k];
					chiphi = chiphitamthoi;
				}
			}
			else if(chiphitamthoi < chiphi) Try(i + 1);
			chiphitamthoi -= a[x[i - 1]][x[i]];
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	chiphitamthoi = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]){
				cmin = min(cmin, a[i][j]);
			}	
		} 
	}
	for(int i = 1; i <= 20; i++) chuaxet[i] = true;
	chiphi = 1e9;
	Try(1);
	// for(int i = 1; i <= n; i++){
	// 	cout << ans[i] << ",";
	// }
	cout << chiphi << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();
	}
}