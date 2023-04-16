#include <bits/stdc++.h>
using namespace std;

int n, k ,ans;
int a[20], canxet[20];

bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != canxet[i]) return false;
	}
	return true;
}

void Try(int i,int &count){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			count++;
			if(check()) ans = count;
		}
		else Try(i + 1, count);
	}
}

void testCase(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++) cin >> canxet[i];
	int count = 0;
	Try(1,count);
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}