#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x)
{
	return x == '+' or x == '-' or x == '*' or x == '/';
}

string getString(char x)
{
	string s(1, x);
	return s;
}

void testCase(){
	string s;
	cin >> s;
	stack<string> st;
	for (int i = s.size() - 1; i >= 0; i--){
		if (isOperator(s[i])){
			string first = st.top();st.pop();
			string second = st.top();st.pop();
			string tmp = "(" + first + s[i] + second + ")";
			st.push(tmp);
		}
		else st.push(getString(s[i]));
	}
	cout << st.top() << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		testCase();
}