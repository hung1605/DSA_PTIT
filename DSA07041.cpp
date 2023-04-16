#include <bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin >> s;
	stack<char> st;
	int count = 0;
	for(auto i : s){
		if(i == '(') st.push(i);
		else{
			if(!st.empty()){
				count += 2;
				st.pop();
			}
		}
	}
	cout << count << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}