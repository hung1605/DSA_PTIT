#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node *pre;

	Node(int data){
		this->data = data;
		next = NULL;
		pre = NULL;
	}
}

void Push(Node* &head_ref, int new_data){
	Node new_node = new Node(new_data);
	new_node->next = head_ref;
	if(head_ref != NULL) //head == null thi ko co head->pre
		head_ref->pre = new_node;
	head_ref = new_node;
}

void Append(Node* &head_ref, int new_data){
	Node new_node = new Node(new_data);
	if(head_ref == NULL){
		head_ref = new_node;
		return;
	}
	Node* last = head_ref;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = new_node;
	new_node->pre = last;
}

void Insert(Node* &head_ref, int new_data, int index){
	Node *k_node = head_ref;
	for(int i = 1; i < index; i++){
		k_node = k_node->next;
	}
	Node *new_node = new Node(new_data);
	new_node->pre = k_node->pre;
	new_node->next = k_node;
	k_node->pre->next = new_node;
	k_node->pre = new_node;
}

int main(){

}