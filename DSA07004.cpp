#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<char> st;
	int count = 0;
	for(int i = 0; i < (int)s.length(); i++){
		if(s[i] == '('){
			st.push('(');
		}
		else{
			if(st.empty()){
				count++;
				st.push('(');	
			} 
			else{
				st.pop();
			}
		}
	}
	cout << st.size() / 2 + count << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}