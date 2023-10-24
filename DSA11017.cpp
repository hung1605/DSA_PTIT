#include <bits/stdc++.h>
using namespace std; 

class node{
public:
	string data;
	node *left, *right;

	node(string data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void insert(node* &root, string x){
	if(root == NULL){
		root = new node(x);
		return;	
	} 
	if(root->data > x) insert(root->left, x);
	if(root->data < x) insert(root->right, x);
}

void postOdered(node* root){
	if(root == NULL) return;
	if(root->left) postOdered(root->left);
	if(root->right) postOdered(root->right);
	cout << root->data << " ";
}

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	node *root = NULL;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	postOdered(root);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}