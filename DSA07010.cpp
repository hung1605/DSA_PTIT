#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x){
	return x == '+' or x == '-' or x == '*' or x == '/';
}

void testCase(){
	string s; cin >> s;
	stack<string> st;
	st.push("");
	for(int i = s.size() - 1; i >= 0; i--){
		if(isOperator(s[i])){
			string first = st.top(); st.pop();
			string second = st.top(); st.pop();
			st.push(first + second + string(1,s[i]));
		}
		else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}