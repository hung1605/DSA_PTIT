#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	if(n == 1 or a[0] == a[1]){
		cout << -1 << endl;
		return;
	}
	cout << a[0] << " " << a[1] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}