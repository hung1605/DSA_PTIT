#include <bits/stdc++.h>
using namespace std;

int n, a[20][20], x[20], chuaxet[20], chiphi, chiphitamthoi, cmax; 

void Try(int i){
	if(chiphitamthoi + cmax * (n - i + 1) <= chiphi) return;
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			x[i] = j;chuaxet[j] = false;
			chiphitamthoi += a[x[i]][i];
			if(i == n){
				if(chiphitamthoi > chiphi){
					chiphi = chiphitamthoi;
				}
			}
			else if(chiphitamthoi >= chiphi) Try(i + 1);
			chiphitamthoi -= a[x[i]][i];
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	chiphitamthoi = 0;
	cin >> n;
	cmax = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];	
			cmax = max(cmax, a[i][j]);
		} 
	}
	for(int i = 1; i <= 20; i++) chuaxet[i] = true;
	chiphi = 0;
	Try(1);
	cout << chiphi << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();
	}
}