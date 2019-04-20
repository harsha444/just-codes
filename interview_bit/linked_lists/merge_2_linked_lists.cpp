#include <bits/stdc++.h>

using namespace std;

struct ListNode{
	int data;
	struct ListNode* next;
};

ListNode* new_node(int data){
	ListNode* temp = new ListNode();
	temp->data = data;
	temp->next = NULL;
	return temp;
}

ListNode* mergeTwoLists(ListNode* A, ListNode* B){
	ListNode* temp=NULL;
	if(A == NULL){
		return B;
	}
	else if(B == NULL){
		return A;
	}
	if(A->data <= B->data){
		temp = A;
		temp->next = mergeTwoLists(A->next, B);
	}else if(A->data > B->data){
		temp = B;
		temp->next = mergeTwoLists(A, B->next);
	}
	return temp;
}


int main(){
	ListNode* root1 = new_node(5);
	root1->next = new_node(8);
	root1->next->next = new_node(20);

	ListNode* root2 = new_node(4);
	root2->next = new_node(11);
	root2->next->next = new_node(15);

	ListNode* res = mergeTwoLists(root1, root2);
	while(res != NULL){
		cout << res->data << " ";
		res = res->next;
	}
	return 0;
}