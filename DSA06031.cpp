#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	multiset<int> ms;
	for(int i = 0; i < k; i++) ms.insert(a[i]);
	cout << *ms.rbegin() << " ";
	for(int i = k; i < n; i++){
		multiset<int>::iterator itr = ms.find(a[i - k]);
		ms.erase(itr);
		ms.insert(a[i]);
		cout << *ms.rbegin() << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}