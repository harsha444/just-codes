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

ListNode* reverseBetween(ListNode* A, int B, int C){
	// ListNode* root = A;
	// ListNode* temp1 = A;
	// ListNode* lend = A;
	// int len = C-B+2;
	// int m=B;
	// int n=C;
	// while(--m && m>0){
	// 	temp1=temp1->next;
	// 	if(m>1){
	// 		lend = lend->next;
	// 	}
	// }
	// ListNode* curr = temp1;
	// ListNode* prev = NULL;
	// ListNode* next1 = NULL;
	// while(len-- && len>0){
	// 	next1 = curr->next;
	// 	if(prev != NULL){
	// 		curr->next = prev;
	// 	}
	// 	prev = curr;
	// 	curr = next1;
	// }

	// lend->next = prev;
	// temp1->next = curr;
	// return root;
	ListNode* dummy = new ListNode(0); // Change this to new_node(0) for local testing
    ListNode* prev_end = dummy;
    dummy->next = A;
    int m=B;
    int n=C;
    if(m>n){ return NULL; }
    if(m==n){ return A; }
    m--;
    while(m--){
        prev_end = prev_end->next;
    }
    ListNode* rev_start = prev_end->next;
    ListNode* prev = rev_start;
    ListNode* curr = rev_start->next;
    ListNode* next1 = NULL;

    for(int i=B; i<n; i++){
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    prev_end->next = prev;
    rev_start->next = next1;
    return dummy->next;
}

int main(){
	int m = 2;
	int n = 4;
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	root->next->next->next = new_node(4);
	root->next->next->next->next= new_node(5);

	ListNode* res = reverseBetween(root, m, n);
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}