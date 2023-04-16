#include <bits/stdc++.h>
using namespace std;

int count(int value, int b[], int m, int amount_of_special_element[]){
	int cnt = 0;
	if(value == 0) return 0;
	if(value == 1) return amount_of_special_element[0];
	int pos = upper_bound(b,b+m,value) - b;
	int ans = m - pos;
	ans += amount_of_special_element[0] + amount_of_special_element[1];
	if(value == 2){
		ans -= amount_of_special_element[3] + amount_of_special_element[4];
	}
	if(value == 3) ans += amount_of_special_element[2];
	return ans;
}

void testCase(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	
	int amount_of_spe_element[5] = {};
	for(int x : b){
		if(x < 5) amount_of_spe_element[x]++;
	}

	sort(b,b+m);
	int total_pair = 0;
	for(int x : a){
		total_pair += count(x, b, m, amount_of_spe_element);
	}
	cout << total_pair << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}