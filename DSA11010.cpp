#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long n; cin >> n;
	int father,son;
	char c;
	for(int i = 0; i < n; i++)
		cin >> father >> son >> c;
	n += 2;
	cout << (!(n & (n - 1)) ? "YES" : "NO") << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}