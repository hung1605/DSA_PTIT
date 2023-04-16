#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<int> st;
	int cnt = 0, ans = 0;
	vector<bool> wrong_braket(s.size(), true);
	for(int i = 0; i < (int)s.length(); i++){
		if(s[i] == '(' or s[i] == '[')
			st.push(i);
		else{
			if(!st.empty()){
				if(s[i] == ']' and s[st.top()] == '['){
					wrong_braket[i] = wrong_braket[st.top()] = false;
					st.pop();
				}
				else if(s[i] == ')' and s[st.top()] == '('){
					wrong_braket[i] = wrong_braket[st.top()] = false;
					st.pop();
				}
				else{
					while(!st.empty()) st.pop();
				}
			}
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(!wrong_braket[i]){
			if(s[i] == '['){
				cnt++;
				ans = max(ans, cnt);
			}
		}
		else cnt = 0;
	}
	cout << ans << endl;
}

int main(){
	testCase();
}

