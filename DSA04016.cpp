#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int m,n,k; cin >> m >> n >> k;
	int a[m], b[n];
	vector<int> c;
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	int i = 0, j = 0;
	while(i < m and j < n){
		if(a[i] <= b[j]){
			c.push_back(a[i]);
			i++;	
		} 
		else{
			c.push_back(b[j]);
			j++;	
		} 
	}
	while(i < m){
		c.push_back(a[i]);
		i++;
	}
	while(j < n){
		c.push_back(b[j]);
		j++;
	}
	cout << c[k - 1] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}