#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	string s; cin >> s;
	int a[s.size()];
	for(int i = 0; i < s.size(); i++){
		a[i] = s[i] - '0';
	}
	cout << n << " ";
	if(next_permutation(a, a + s.size()) == true){
		for(int i = 0; i < (int)s.size(); i++){
			cout << a[i];
		}
		cout << endl;
	}
	else cout << "BIGGEST" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}