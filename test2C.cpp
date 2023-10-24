#include <bits/stdc++.h>
using namespace std;

void Test_case(){
	string s; cin >> s;
	bool a[s.size()];
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			st.push(i);
		}
		else{
			if(st.empty()){
				a[i] = false;
			}
			else{
				a[i] = true;
				a[st.top()] = true;
				st.pop();
			}
		}
	}
	while(!st.empty()){
		a[st.top()] = false;
		st.pop();
	}
	int cnt = 0, ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(a[i]){
			cnt++;
			ans = max(ans, cnt);	
		} 
		else{
			ans = max(ans, cnt);
			cnt = 0;
		}
	}
	cout << ans << endl;
}


int main(){
	int t; cin >> t;
	while(t--) Test_case();
}
