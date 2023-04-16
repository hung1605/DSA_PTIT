#include <bits/stdc++.h>
using namespace std;

int degree(char x){
	if(x == '*' or x == '/') return 3;
	if(x == '+' or x == '-') return 2;
	if(x == '(') return 1;
}

void infix_to_prefix(string s){
	stack<string> st;
	
}

void testCase(){
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) testCase();
}
