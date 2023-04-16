#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int len1, len2, len3;
	cin >> len1 >> len2 >> len3;
	long long a[len1], b[len2], c[len3];
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	for(auto &x : c) cin >> x;
	int i = 0, j = 0, k = 0;
	bool check = true;
	while(i < len1 and j < len2 and k < len3){
		if(a[i] == b[j] and a[i] == c[k]){
			cout << a[i] << " ";
			i++;j++;k++;
			check = false;
		}
		else if(a[i] < b[j]) i++;
		else if(b[j] < c[k]) j++;
		else k++;
	}
	if(check) cout << -1;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}