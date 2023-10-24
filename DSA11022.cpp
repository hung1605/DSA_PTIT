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

void printIntermediary(node *root, int &cnt){
	if(root->left or root->right) cnt ++;
	if(root->left) printIntermediary(root->left, cnt);
	if(root->right) printIntermediary(root->right, cnt);
}

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	node *root = NULL;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		insert(root, a[i]);
	}
	int cnt = 0;
	printIntermediary(root, cnt);
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}