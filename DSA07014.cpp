#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<int> st;
	for(int i = s.size() - 1; i >= 0; i--){
		if(isdigit(s[i])) st.push(s[i] - '0');
		else{
			int first = st.top(); st.pop();
			int second = st.top(); st.pop();
			if(s[i] == '*') st.push(first * second);
			else if(s[i] == '/') st.push(first / second);
			else if(s[i] == '+') st.push(first + second);
			else st.push(first - second);
		}
	}
	cout << st.top() << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) testCase();
}