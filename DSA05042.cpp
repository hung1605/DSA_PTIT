#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k;
	cin >> n >> k;
	long long sum[n + 5], a[n + 5];
	sum[0] = 0;
	set<long long> s;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
		s.insert(sum[i]);
	}	
	if(k == 0){
		for(int i = 1; i <= n; i++){
			if(a[i] == 0){
				cout << "YES\n";
				return;
			}
		}
		cout << "NO\n";
		return;
	}
	else{
		s.insert(0);
		for(int i = 1; i <= n; i++){
			if(s.count(sum[i] - k)){
				cout << "YES\n";
				return;
			}
		}
		cout << "NO\n";
		return;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}