#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(a, a + n);
	sort(b, b + n);
	int i = 0, j = 0, k = 0;
	int c[n + m];
	while(i < n and j < m){
		if(a[i] <= b[j]){
			c[k] = a[i];
			i++;
			k++;
		}
		else{
			c[k] = b[j];
			j++;
			k++;
		}
	}
	while(i < n){
		c[k] = a[i];
		i++; k++;
	}
	while(j < m){
		c[k] = b[j];
		j++; k++;
	}
	for(auto x : c) cout << x << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}