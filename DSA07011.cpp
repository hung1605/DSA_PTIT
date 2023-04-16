#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x){
	return x == '+' or x == '-' or x == '*' or x == '/';
}

void testCase(){
	string s; cin >> s;
	stack<string> st;
	st.push("");
	for(int i = 0; i < (int)s.size(); i++){
		if(isOperator(s[i])){
			string second = st.top(); st.pop();
			string first = st.top(); st.pop();
			st.push(string(1,s[i]) + first + second);
		}
		else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}