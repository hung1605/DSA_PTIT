#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	string ans = s;
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			if(!st.empty()){
				int index = st.top(); st.pop();
				ans[i] = '1';
				ans[index] = '0';
			}
			else{
				ans[i] = '2';
			}
		}
	}
	while(!st.empty()){
		int tmp = st.top();st.pop();
		ans[tmp] = '2';
	}
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] == '2') cout << "-1";
		else cout << ans[i];
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

