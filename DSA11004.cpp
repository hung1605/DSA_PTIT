#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void levelOrder(Node *root){
	queue<Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node *node = Q.front(); Q.pop();
		cout << node->data << " ";
		if(node->left != NULL) Q.push(node->left);
		if(node->right != NULL) Q.push(node->right);
	}
}

void insert(Node *root, int n1, int n2, char c){
	queue<Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node *node = Q.front(); Q.pop();
		if(node->data == n1){
			if(c == 'L'){
				node->left = new Node(n2);
			}
			else node->right = new Node(n2);
			break;
		}
		if(node->left != NULL) Q.push(node->left);
		if(node->right != NULL) Q.push(node->right);
	}
}

void testCase(){
	int n; cin >> n;
	int n1,n2;
	char c;
	Node *root;
	for(int i = 1; i <= n; i++){
		cin >> n1 >> n2 >> c;
		if(i == 1){
			root = new Node(n1);
		}
		insert(root, n1, n2, c);
	}
	levelOrder(root);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}