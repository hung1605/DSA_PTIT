#include <bits/stdc++.h>
using namespace std;
int a[30] = {};
int n, k;
int lon_nhat;

void in(){
	for(int i = 1; i <= k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void next_combination(int i){
	for(int j = a[i - 1] + 1; j <= lon_nhat - k + i; j++){
		a[i] = j;
		if(i == k){
			in();
		}
		else next_combination(i + 1);
	}
}

void testCase(){
	cin >> n >> k;
	set<int> s;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		s.insert(x);
	}
	int index = 1;
	for(int x : s){
		a[index] = x;
		index++;
	}
	lon_nhat = a[--index];
	a[0] = a[1] - 1;
	next_combination(1);
}

int main(){
	int t = 1;
	while(t--) testCase();
}

