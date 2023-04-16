#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;// (A+(B+C)
	stack<int> st;
	for(auto i : s){
		if(isdigit(i)) st.push(i - '0');
		else{
			int second = st.top(); st.pop();
			int first = st.top(); st.pop();
			if(i == '*') st.push(first * second);
			else if(i == '/') st.push(first / second);
			else if(i == '+') st.push(first + second);
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