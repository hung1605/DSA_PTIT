#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *left, *right;

	node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void insert(node *&root, int val){
	if(root == NULL) {
		root = new node(val);	
		return;
	}

	if(root->data < val) insert(root->right, val);
	else insert(root->left, val);
}

void preOrder(node *root){
	cout << root->data << " ";
	if(root->left) preOrder(root->left);
	if(root->right) preOrder(root->right);
}

void testCase(){
	int n; 
	node *root = NULL;

	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		if(i == 0) {
			root = new node(tmp);
			continue;
		}
		insert(root, tmp);
	}
	preOrder(root);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}