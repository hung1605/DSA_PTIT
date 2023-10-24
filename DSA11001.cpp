#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
	return c == '+' 
		or c == '-' 
		or c == '*'
		or c == '/';
}

void testCase(){
	string s;
	cin >> s;
	string ans = "";
	stack<string> st;
	for(int i = 0; i < s.size(); ++i){
		if(!isOperator(s[i])){
			st.push(string(1, s[i]));
		} 
		else{
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			st.push(s2 + " " + string(1, s[i]) + " " + s1);
		}
	}
	cout << st.top() << endl;
	st.pop();
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}