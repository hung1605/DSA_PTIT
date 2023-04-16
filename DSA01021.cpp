#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[20],b[20];

int different_element(){
	for(int i = 1; i <= k; i++) b[i] = a[i];
	int i = k;
	while(i >= 1 and a[i] == n - k + i) i--;
	if(i == 0) return k;
	a[i]++;
	for(int j = i + 1; j <= k ; j++) a[j] = a[j - 1] + 1;
	int count = 0;
	for(int i = 1; i <= k; i++){
		if(binary_search(b + 1,b + k + 1,a[i]) == false){
			count++;
		}
	}
	return count;
}

void testCase(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
	}
	cout << different_element() << endl;
}
int main(){
	int t; cin >> t;
	while(t--) testCase();
}