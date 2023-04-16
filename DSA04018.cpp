#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n], index, ok = 1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i]and ok){
			index = i;
			ok = false;
		}
	}
	cout << index << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}