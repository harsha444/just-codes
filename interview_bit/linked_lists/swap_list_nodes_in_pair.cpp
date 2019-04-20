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

ListNode* swapPairs(ListNode* A){
	if (A==NULL || A->next==NULL){
		return A;
	}
	ListNode* prev = A;
	ListNode* curr = A->next;
	ListNode* res = A->next;
	ListNode* next1 = NULL;
	while(1){
		next1 = curr->next;
		curr->next = prev;
		if(next1 == NULL || next1->next==NULL){
			prev->next = next1;
			break;
		}
		prev->next = next1->next;
		prev = next1;
		curr = prev->next;
	}
	return res;
}

int main(){
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	root->next->next->next = new_node(4);
	root->next->next->next->next= new_node(5);

	ListNode* res = swapPairs(root);
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}