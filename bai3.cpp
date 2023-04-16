#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n , k;
	cin >> n >> k;
	int a[n + 5];
	multiset<int> ms;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= k; i++) ms.insert(a[i]);
	multiset<int>::iterator it = ms.begin();
	cout << *ms.rbegin() << " ";
	for(int i = k + 1; i <= n; i++){
		ms.erase(ms.find(a[i - k]));
		ms.insert(a[i]);
		cout << *ms.rbegin() << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}