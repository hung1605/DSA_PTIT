#include <bits/stdc++.h>
using namespace std;

int a[4] = {2,3,5,7};
int hoanvi[100];
int n;
void in(){
	for(int i = 1; i <= n; i++){
		cout << a[hoanvi[i] - 1];
	}
	cout << endl;
}

bool kiemtra(){
	int dem_1 = 0,dem_2 = 0,dem_3 = 0,dem_4 = 0;
	for(int i = 1; i <= n; i++){
		if(hoanvi[i] == 1) dem_1++;
		else if(hoanvi[i] == 2) dem_2++;
		else if(hoanvi[i] == 3) dem_3++;
		else if(hoanvi[i] == 4) dem_4++;
	}
	if(dem_1 and dem_2 and dem_3 and dem_4 and hoanvi[n] != 1) return true;
	return false;
}

void Try(int i){
	for(int j = 1; j <= 4; j++){
		hoanvi[i] = j;
		if(i == n){
			if(kiemtra()) in();
		}
		else Try(i + 1);
	}
}

int main(){
	int k; cin >> k;
	for(n = 4; n <= k; n++)
		Try(1);
}