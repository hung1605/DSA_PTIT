#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<char> st;
	for(char c : s){
		if(c == '[') st.push(c);
		else{
			if(st.empty()) st.push(c);
			else st.pop();
		}
	}
	cout << st.size() << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}