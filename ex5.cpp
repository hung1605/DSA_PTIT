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

void insert(node *&root, int val){
    if(root == NULL){
        root = new node(val);
        return;
    }
    if(root->data > val){
        insert(root->left, val);
    }
    else insert(root->right, val);
}

void preOrder(node *root){
    cout << root->data << " ";
    if(root->left) preOrder(root->left);
    if(root->right) preOrder(root->right);
}

void TestCase() {
    int n; cin >> n;
    node *root = NULL;
    int a[n + 5];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            root = new node(a[i]);
        }
        else insert(root, a[i]);
    }
    preOrder(root);
    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) TestCase();
}
