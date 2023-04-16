#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<char> st;
	for(char i : s){
		if(i == '(' or i == '[' or i == '{')
			st.push(i);
		else{
			if(st.empty()){
				cout << "NO\n";
				return;
			}
			else{
				if((i == ')' and st.top() == '(') 
				or (i == ']' and st.top() == '[') 
				or (i == '}' and st.top() == '{')){
					st.pop();
				}
				else{
					cout << "NO\n";
					return;
				}
			}
		}
	}
	if(st.empty()) cout << "YES\n"; 
	else cout << "NO\n";
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) testCase();
}