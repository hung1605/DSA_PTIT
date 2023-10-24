#include <bits/stdc++.h>
using namespace std;

int n, a[20][20], x[20], chuaxet[20];
int bestPrice, currPrice;

void Try(int i){
	for(int j = 2; j <= n; j++){
		if(chuaxet[j]){
			x[i] = j;chuaxet[j] = false;
			currPrice += a[x[i - 1]] [x[i]];
			if(i == n)
				bestPrice = min(bestPrice, currPrice + a[x[n]][1]);
			else if(currPrice < bestPrice)
				Try(i + 1);
			chuaxet[j] = true;
			currPrice -= a[x[i - 1]] [x[i]];
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	memset(chuaxet, true, sizeof(chuaxet));
	memset(x, 0, sizeof(x));
	x[1] = 1; x[n + 1] = 1;
	bestPrice = 1e9;
	currPrice = 0;
	Try(2);
	cout << bestPrice << endl;
}