#include <bits/stdc++.h>
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

void insert(node *&root, int data){
	if(root == NULL)
		root = new node(data);
	else if(root->data < data)
		insert(root->right, data);
	else if(root->data > data)
		insert(root->left, data);
}

void printLeave(node *root){
	if(root->left) printLeave(root->left);
	if(root->right) printLeave(root->right);
	if(root->left == NULL and root->right == NULL){
		cout << root->data << " ";
		return;
	}
}

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	node *root = NULL;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		insert(root, a[i]);
	}
	printLeave(root);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}