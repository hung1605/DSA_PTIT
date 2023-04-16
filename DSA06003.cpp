#include<bits/stdc++.h>
using namespace std;

void Print(int a[],int n){
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int ans = 0;
	for(int i = 0; i < n - 1; i++){
		bool check = false;
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_index]){
				check = true;
				min_index = j;
			}
		}
		if(check){
			swap(a[min_index],a[i]);
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}