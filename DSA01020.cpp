#include <bits/stdc++.h>
using namespace std;

void pre_bi(string s){
	int i = s.size() - 1;
	while(i >= 0 and s[i] == '0'){
		s[i]+=1;
		i--;
	}
	if(i < 0){
		cout << s << endl;
		return;
	}
	s[i] = '0';
	cout << s << endl;
}

void testCase(){
	string s;
	cin >> s;
	pre_bi(s);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}