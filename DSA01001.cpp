#include <bits/stdc++.h>
using namespace std;

void testCase(){
	cin.ignore();
	string s; cin >> s;
	int i = s.size() - 1;
	while(s[i] != '0' and i >= 0){
		s[i] = '0';
		i--;
	}
	if(i >= 0) s[i] = '1';
	cout << s << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();
	}

}