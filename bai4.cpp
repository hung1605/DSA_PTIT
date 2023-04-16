#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	int big = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		big = max(big, a[i]);	
	} 
	int dem = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == big){
			dem ++;
		}
		else dem = 0;
		ans = max(ans, dem);
	}
	cout << ans ;
	
}