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

void printSpiralOrder(node *root){
	queue<node*> q;
	q.push(root);

	vector<int> vst[100];

	while(!q.empty()){
		node *temp = q.front(); q.pop();
		vst[temp->level].push_back(temp->data);
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
	}
	for(int i = 1; i < 100; i++){
		if(vst[i].empty()) break;
		if(i % 2 == 1) reverse(vst[i].begin(), vst[i].end());
		for(int item : vst[i]){
			cout << item << " ";
		}
	}
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
	printSpiralOrder(root);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}