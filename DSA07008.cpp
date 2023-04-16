#include <bits/stdc++.h>
using namespace std;

int priority(char x){
	if(x == '+' or x == '-') return 2;
	if(x == '*' or x == '/') return 3;
	if(x == '^') return 4;
	return 1;
}

bool isletter(char x){
	return ('A' <= x and x <= 'Z') or ('a' <= x and x <= 'z');
}

void testCase(){
	string s; cin >> s;// (A+(B+C)
	stack<char> st;
	for(auto i : s){
		if(isletter(i)) cout << i;
		else if(i == '(') st.push(i);
		else if(i == ')'){
			while(!st.empty() and st.top() != '('){
				cout << st.top(); st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() and priority(st.top()) >= priority(i)){
				cout << st.top(); st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty() and st.top() != '('){
		cout << st.top(); st.pop();
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--) testCase();
}