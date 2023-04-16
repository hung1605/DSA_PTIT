#include <bits/stdc++.h>
using namespace std;


void testCase(){
	int k; cin >> k;
	string s; cin >> s;
	int frequence[(int)'Z' + 1] = {0};
	int most = 0;
	for(int i = 0; i < (int)s.size(); i++){
		frequence[(int)s[i]]++;
		most = max(most, frequence[(int)s[i]]);	
	} 
	if(most <= ceil((float)s.length() / k)) cout << 1;
	else cout << -1;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}