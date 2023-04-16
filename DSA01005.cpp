#include <bits/stdc++.h>
using namespace std;

void hoanviketiep(int a[], int n, int &cnt){
	for(int i = n - 2; i >= 0; i--){
		if(a[i] > a[i + 1]) continue;
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
	cout << cnt << ": ";
	for(int i = 0; i < n; i++) cout << a[i];
	cout << " ";
}

int factorial(int n){
	int f = 1;
	for(int i = 1; i <= n; i++) f*= i;
	return f;
}

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) a[i] = i + 1;
	for(int x : a) cout << x;
	cout << " ";
	int count = factorial(n) - 1;
	int cnt = 1;
	while(count--){
		hoanviketiep(a,n,cnt);
	}
	cout << endl;
}

int main(){
	int t = 1;
	while(t--) testCase();
}