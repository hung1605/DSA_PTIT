#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, ans = ""; 
	cin >> s;
	stack<char> st;
	for(char i : s){
		if(i == '<'){
			if(!ans.empty()){
				st.push(ans.back());
				ans.pop_back();
			}
		}
		else if(i == '>'){
			if(!st.empty()){
				ans += st.top();
				st.pop();
			}
		}
		else if(i == '-'){
			if(!ans.empty()) ans.pop_back();	
		}
		else ans += i;
	}
	while(!st.empty()){
		ans += st.top(); st.pop();
	}
	cout << ans;
}