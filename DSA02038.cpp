#include <bits/stdc++.h>
using namespace std;

int a[1000], n, k, x[1000];

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			for(int z = 1; z <= k; z++) cout << a[x[z]] << " ";
			cout << endl;
		}
		else Try(i + 1);
	}
}

void testCase(){
	x[0] = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	Try(1);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}