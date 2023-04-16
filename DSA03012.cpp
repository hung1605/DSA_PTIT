#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	int len = s.size();
	int count = 0;
	int a[26] = {0};
	for(int i = 0; i < len; i++){
		a[s[i] - 'a']++;
		count = max(count,a[s[i] - 'a']);
	}
	if(len % 2 == 0){
		if(count > len / 2) cout << -1 << endl;
		else cout << 1 << endl;
	}
	else{
		if(count - 1 > len / 2) cout << -1 << endl;
		else cout << 1 << endl;
	}
	
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}