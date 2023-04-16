#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	set<char> s1;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		for(char x : s) s1.insert(x);
	}
	for(char x : s1) cout << x << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}