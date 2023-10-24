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

int depthTree(node *root){
	if(root == NULL) return 0;
	return max(depthTree(root->left), depthTree(root->right)) + 1;
}

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	node *root = NULL;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		insert(root, a[i]);
	}
	cout << depthTree(root) - 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}