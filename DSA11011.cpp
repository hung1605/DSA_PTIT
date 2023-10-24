#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	int level;
	node *left, *right;

	node(int data, int level){
		this->data = data;
		this->level = level;
		left = right = NULL;
	}
};

void insert(node *root, int father, int son, char c){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *tmp = q.front(); q.pop();
		if(tmp->data == father){
			if(c == 'L') tmp->left = new node(son, tmp->level + 1);
			else tmp->right = new node(son, tmp->level + 1);
		}
		if(tmp->left) q.push(tmp->left);
		if(tmp->right) q.push(tmp->right);
	}
}

bool checkFullTree(node *root){
	if(root->left and root->right) 
		return checkFullTree(root->left) and checkFullTree(root->right);
	if(!(root->left or root->right))
		return true;
	return false;
}

void testCase(){
	int n; cin >> n;
	node *root = NULL;
	for(int i = 0; i < n; i++){
		int x, y; char c;
		cin >> x >> y >> c;
		if(i == 0) root = new node(x, 1);
		insert(root, x, y, c);
	}
	cout << (checkFullTree(root) ? 1 : 0) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}