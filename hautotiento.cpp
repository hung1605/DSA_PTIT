#include <bits/stdc++.h>
using namespace std;

bool dau(string s){
	return (s[0] == '-' or s[0] == '+' or s[0] == '*' or s[0] == '/') 
			and s.size() == 1;
}

void testCase(){
	string a[10000];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(dau(a[n - 1])){
		stack<string> st;
		for(int i = 0; i < n; i++){
			if(!dau(a[i]))
				st.push(a[i]);
			else{
				long long tmp2 = stoll(st.top()); st.pop();
				long long tmp1 = stoll(st.top()); st.pop();
				if(a[i][0] == '+'){
					st.push(to_string(tmp1 + tmp2));
				}
				else if(a[i][0] == '-'){
					st.push(to_string(tmp1 - tmp2));
				}
				else if(a[i][0] == '*'){
					st.push(to_string(tmp1 * tmp2));
				}
				else if(a[i][0] == '/'){
					st.push(to_string(tmp1 / tmp2));
				}
			}
		}
		cout << st.top() << endl;
	}
	else{
		stack<string> st;
		for(int i = n - 1; i >= 0; i--){
			if(!dau(a[i]))
				st.push(a[i]);
			else{
				long long tmp1 = stoll(st.top()); st.pop();
				long long tmp2 = stoll(st.top()); st.pop();
				if(a[i][0] == '+'){
					st.push(to_string(tmp1 + tmp2));
				}
				else if(a[i][0] == '-'){
					st.push(to_string(tmp1 - tmp2));
				}
				else if(a[i][0] == '*'){
					st.push(to_string(tmp1 * tmp2));
				}
				else if(a[i][0] == '/'){
					st.push(to_string(tmp1 / tmp2));
				}
			}
		}
		cout << st.top() << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}