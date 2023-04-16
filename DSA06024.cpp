#include <bits/stdc++.h>
using namespace std;

void Print(int a[], int n){
	for(int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
}

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int count = 1;
	for(int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_index]) min_index = j;
		}
		swap(a[min_index], a[i]);
		cout << "Buoc " << count++ << ": "; Print(a,n);	
	}
}
int main(){
	int t = 1;
	while(t--) testCase();
}