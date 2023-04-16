#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	bool check = true;
	int a[n];
	for(int &x : a) cin >> x;
	for(int i = n - 2; i >= 0; i--){
		if(a[i] > a[i + 1]) continue;
		check = false;
		int min_index = i + 1;
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i] and a[j] < a[min_index]) min_index = j;
		}
		swap(a[i], a[min_index]);
		for(int j = i + 1; j <= (n + i) / 2; j++){
			swap(a[j], a[n + i - j]);
		}
		break;
	}
	if(check) for(int i = 0; i < n; i++) a[i] = i + 1;
	for(int x : a) cout << x << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}