#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<int> st;
	int count = 0, ans = 0;
	vector<bool> wrong_braket(s.size(), true);
	for(int i = 0; i < (int)s.length(); i++){
		if(s[i] == '(')
			st.push(i);
		else{
			if(!st.empty()){
				wrong_braket[i] = wrong_braket[st.top()] = false;
				st.pop();
			}
		}
	}
	for(auto x : wrong_braket){
		if(x) count = 0;
		else{
			count ++;
			ans = max(ans, count);
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}