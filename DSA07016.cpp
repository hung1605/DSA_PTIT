#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	int len = s.length();
	string result = "";
	stack<int> st;
	for(int i = 0; i <= len; i++){
		st.push(i + 1);
		if(i == len or s[i] == 'I'){
			while(!st.empty()){
				result += to_string(st.top());
				st.pop();
			}
		}
	}
	cout << result << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}