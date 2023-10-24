#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *left, *right;
	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int search(int arr[], int strt, int end, int value){
    int i;
    for (i = strt; i <= end; i++){
        if (arr[i] == value)
            return i;
    }
}
/* Recursive function to construct binary
of size len from Inorder traversal in[]
and Preorder traversal pre[]. Initial values
of inStrt and inEnd should be 0 and len -1.
The function doesn't do any error checking
for cases where inorder and preorder do not
form a tree */
//4 2 5 1 3 6
//1 2 4 5 3 6
node* buildTree(int Inorder[], int Preorder[], int inStart, int inEnd,int &preIndex){
    if (inStart > inEnd)
        return NULL;

    /* Pick current node from Preorder
    traversal using preIndex
    and increment preIndex */
    node* tNode = new node(Preorder[preIndex++]);
 
    /* If this node has no children then return */
    if (inStart == inEnd)
        return tNode;
 
    /* Else find the index of this node in Inorder traversal */
    int inIndex = search(Inorder, inStart, inEnd, tNode->data);
 
    /* Using index in Inorder traversal, construct left and
    right subtress */
    tNode->left = buildTree(Inorder, Preorder, inStart, inIndex - 1, preIndex);
    tNode->right = buildTree(Inorder, Preorder, inIndex + 1, inEnd, preIndex);
 
    return tNode;
}

void postOdered(node* root){
    if(root == NULL) return;
    postOdered(root->left);
    postOdered(root->right);
    cout << root->data << " ";
}

void testCase(){
	int n; cin >> n;
	int Inorder[n], Preorder[n];
	for(int i = 0; i < n; i++) cin >> Inorder[i];
	for(int i = 0; i < n; i++) cin >> Preorder[i];
    int x = 0;
    node *root = buildTree(Inorder, Preorder, 0, n - 1, x);
    postOdered(root);
    cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
