#include <bits/stdc++.h>
using namespace std;

char ditgit(int n, int k){
	if(k == pow(2,n - 1)) return 'A' + n - 1;
	int x = pow(2,n - 1);
	if(k <= x) return ditgit(n - 1, k);
	return ditgit(n - 1, k - x);
}

void testCase(){
	int n, k;
	cin >> n >> k;
	cout << ditgit(n ,k) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}