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

bool checkIdentical(node *root1, node *root2){
	if(root1 == NULL and root2 == NULL) return true;
	if(root1 and root2)
		return checkIdentical(root1->left,root2->left) 
			and checkIdentical(root1->right,root2->right)
			and root1->data == root2->data;
	return false;
}

void testCase(){
	int n; 
	node *root1 = NULL;
	node *root2 = NULL;

	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y; char c;
		cin >> x >> y >> c;
		if(i == 0) root1 = new node(x, 1);
		insert(root1, x, y, c);
	}

	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y; char c;
		cin >> x >> y >> c;
		if(i == 0) root2 = new node(x, 1);
		insert(root2, x, y, c);
	}

	cout << (checkIdentical(root1,root2) ? 1 : 0) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}