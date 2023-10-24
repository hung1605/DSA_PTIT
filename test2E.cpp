#include <bits/stdc++.h>
using namespace std;

bool ope(char c){
	return c == '+' or c == '-' or c == '*' or c == '/';
}

void Test_case(){
	stack<string> st;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(!ope(s[i])) st.push(string(1,s[i]));
		else{
			string b = st.top(); st.pop();
			string a = st.top(); st.pop();
			st.push(a + string(1,s[i]) + b);
		}
	}
	cout << st.top() << endl;
}


int main(){
	int t; cin >> t;
	while(t--) Test_case();
}
