#include<bits/stdc++.h>
using namespace std;
string s;
int t;

void testCase(){
	int l,r;
	cin >> l >> r;
	string tmp = s.substr(l - 1, r - l + 1);
	int len = tmp.size();
	for(int i = 0; i < len; i++){
		if(tmp[i] != tmp[len - i - 1]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	cin >> s;
	cin >> t;
	while(t--){
		testCase();
	}
}