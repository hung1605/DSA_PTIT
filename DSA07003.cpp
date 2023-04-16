#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s;//(a + ((b))/c)
	getline(cin, s);
	stack<int> st;
	int len = 0;
	for(int i = 0; i < (int)s.length(); i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			if(st.empty()){
				cout << "Yes\n";
				return;
			}
			else{
				if(i - st.top() == len + 2 or i - st.top() <= 2){
					cout << "Yes\n";
					return;
				}
				len = i - st.top();
				st.pop();
			}
		}
	}
	if(st.empty()) cout << "No\n";
	else cout << "Yes\n";
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) testCase();
}
