#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x){
	return x == '+' || x == '-' || x == '*' || x == '/';
}

void testCase(){
	string s; cin >> s;
	stack<string> st;
	for(int i = 0; i < (int)s.size(); i++){
		if(!isOperator(s[i])) st.push(string(1,s[i]));
		else{
			string first = st.top(); st.pop();
			string second = st.top(); st.pop();
			st.push("(" + second + s[i] + first + ")");
		}
	}
	cout << st.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}