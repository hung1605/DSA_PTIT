#include <bits/stdc++.h>
using namespace std;

int n, k, sum;
int a[25];
bool chuaxet[25];
bool OK;

void Try(int fractal_sum, int index, int cnt){
	if(cnt == k or OK){
		OK = true;
		return;
	}
	for(int i = index; i <= n; i++){
		if(fractal_sum + a[i] <= (sum / k) and chuaxet[i]){
			chuaxet[i] = false;
			if(fractal_sum + a[i] == sum / k){
				// cout << fractal_sum << "\n";
				Try(0,1,cnt+1);	
			} 
			else Try(fractal_sum + a[i], i + 1, cnt);
			chuaxet[i] = true;
		}
	}
}

void testCase(){
	OK = false;
	sum = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];	
	}
	if(sum % k != 0){
		cout << "0\n"; return;
	}
	memset(chuaxet, true, sizeof(chuaxet));
	Try(0, 1, 0);
	cout << (OK ? "1\n" : "0\n");
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}