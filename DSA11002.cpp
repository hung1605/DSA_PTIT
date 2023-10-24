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

node* buildTree(string a[], int n, int index){
	if(index >= n) return NULL;
	node *tmp = new node(a[index]);
	tmp->left = buildTree(a, n, index*2 + 1);
	tmp->right = buildTree(a, n, index*2 + 2);
	return tmp;
}

int calculateTree(node *root){
	if(isdigit(root->data[0])) return stoi(root->data);
	if(root->data[0] == '+')
		return calculateTree(root->left) + calculateTree(root->right);
	if(root->data[0] == '-')
		return calculateTree(root->left) - calculateTree(root->right);
	if(root->data[0] == '*')
		return calculateTree(root->left) * calculateTree(root->right);
	if(root->data[0] == '/')
		return calculateTree(root->left) / calculateTree(root->right);
}

void inOrder(node *root){
	if(root == NULL) return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void testCase(){
	int n; cin >> n;
	string a[n];
	node *root;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	root = buildTree(a, n, 0);
	int ans = calculateTree(root);
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
