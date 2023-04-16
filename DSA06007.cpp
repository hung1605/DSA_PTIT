#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	vector<int> a(n),b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());
	int l = 0, r = n - 1;
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			l = i + 1;
			break;
		}
	}
	for(int i = n - 1; i >= 0; i--){
		if(a[i] != b[i]){
			r = i + 1;
			break;
		}
	}
	cout << l << " " << r << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}