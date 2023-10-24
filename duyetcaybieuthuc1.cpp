#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *left, *right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
}

bool isletter(char c){
	return 'a' <= c and c <= 'z';
}

void testCase(){
	string s;
	cin >> s;
	node *root = NULL;
	stack<node*> st;
	for(int i = 0; i < s.size(); i++){
		if(!isletter(s[i])){
			root = new node(s[i]);
			root->right = st.top(); st.pop();
			root->left = st.top(); st.pop();
			st.push(root);
		}
		else{
			st.push(new node(s[i]));
		}
	}
	
	inOderdr(st.top());
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}