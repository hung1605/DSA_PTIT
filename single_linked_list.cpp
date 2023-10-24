#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node (int new_data){
		data = new_data;
		next = NULL;
	}
};

void Push(Node* &head_ref, int new_data){  
    Node* new_node = new Node(new_data);
    new_node->next = head_ref; 
    head_ref = new_node; 
} 

void Append(Node* &head_ref, int new_data){
	Node *last = head_ref;
	Node* new_node = new Node(new_data);
	if(head_ref == NULL){
		head_ref = new_node;
		return;
	}
	while(last->next != NULL) last = last->next;
	last->next = new_node;
}

void Print(Node *node){
	while(node != NULL){
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

void PopFront(Node* &head_ref){
	Node* tmp = head_ref;
	head_ref = head_ref->next;
	delete tmp; 
}

void PopBack(Node* head_ref){
	if(head_ref == NULL) return;
	if(head_ref->next == NULL) delete head_ref;
	Node* second_last = head_ref;
	while(second_last->next->next != NULL){
		second_last = second_last->next;
	}
	delete second_last->next;
	second_last->next = NULL;
}

int size(Node* head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}
// loại bỏ các phần tử có giá trị bằng value trong dslk
// void RemoveValue(Node* &head_ref, int value){
// 	if(head_ref == NULL) return;
// 	if(head_ref->next == NULL and head_ref->data == value){
// 		head_ref = NULL;
// 		return;
// 	}
// 	Node* cursor = head_ref;
// 	while(cursor->next != NULL){
// 		if(cursor->data == value){
// 			Node* tmp = cursor->next;
// 			cursor->next = 
// 		}
// 	}
// }

void erase(Node* &head_ref, int index){
	if(head_ref == NULL) return;
	if(index < 1 or index > size(head_ref)) return;
	if(index == 1) PopFront(head_ref);
	Node *pre = head_ref;
	for(int i = 1; i < index - 1; i++){
		pre = pre->next;
	}
	Node *temp = pre->next;
	pre->next = temp->next;
	delete temp;
}

void insert(Node* &head_ref, int new_data, int index){
	if(index < 1 or index > size(head_ref) + 1) return;
	if(index == 1) {
		Push(head_ref,new_data); return;
	}
	Node* new_node = new Node(new_data);
	Node* pre = head_ref;
	for(int i = 1; i < index - 1; i++){
		pre = pre->next;
	}
	new_node->next = pre->next;
	pre->next = new_node;
}

void sort(Node* &head_ref){
	for(Node *i = head_ref; i != NULL; i = i->next){
		Node *minNode = i;
		for(Node *j = i->next; j != NULL; j = j->next){
			if(minNode->data > j->data)
				minNode = j;
		}
		swap(i->data,minNode->data);
	}
}

int main(){
	Node* head = NULL;
	for(int i = 1; i <= 10; i++) Append(head,i);
	Print(head);
	insert(head,111,4);
	Print(head);
	erase(head,3);
	Print(head);
	sort(head);
	Print(head);
	list<int>  
	// cout << endl;
	// Node* dslk1 = new Node(10);
	// Node* dslk2 = dslk1;
	// delete dslk1;
	// cout << "dslk1 la: ";
	// Print(dslk1);
	// cout << endl;
	// cout << "dslk2 la: ";
	// Print(dslk2);
}