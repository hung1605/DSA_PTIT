#include <bits/stdc++.h>
using namespace std;

long long n,S, a[50], soToTamThoi, soToToiThieu, tongTien;
bool chuaxet[50];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(tongTien + a[j] <= S and chuaxet[j] == true){
			soToTamThoi ++;
			tongTien += a[j];
			chuaxet[j] = false;
			if(tongTien == S)
				soToToiThieu = min(soToToiThieu, soToTamThoi);
			else if(tongTien < S and soToTamThoi < soToToiThieu) Try(i + 1);
			soToTamThoi -= 1;
			tongTien -= a[j];
			chuaxet[j] = true;
		}
	}
}

int main(){
	soToTamThoi = tongTien = 0;
	soToToiThieu = 1e9;
	cin >> n >> S;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		chuaxet[i] = true;
	} 
	sort(a + 1, a + n + 1, [](int a, int b){
		return a >= b;
	});
	Try(1);
	if(soToToiThieu != 1e9) cout << soToToiThieu;
	else cout << -1;
}