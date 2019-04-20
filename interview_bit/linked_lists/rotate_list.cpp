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

ListNode* rotateList(ListNode* A, int B){
	// int sz = 0;
	// ListNode* temp = A;
	// ListNode* temp1 = A;
	// while(temp1 != NULL){
	// 	temp1 = temp1->next;
	// 	sz++;
	// }
	// if(A->next == NULL){
	// 	return A;
	// }
	// sz = sz-B>0?sz-B:(sz-B)%sz;
	// sz--;
	// cout << sz << "\n";
	// while(temp!=NULL && sz--){
	// 	temp = temp->next;
	// }
	// ListNode* head_ptr = temp->next;
	// ListNode* mid_ptr = head_ptr;
	// while(mid_ptr->next!=NULL){
	// 	mid_ptr = mid_ptr->next;
	// }
	// mid_ptr->next = A;
	// temp->next = NULL;
	// return head_ptr;
	ListNode* temp_len = A;
	int len = 0;
	while(temp_len != NULL){
		temp_len = temp_len -> next;
		len++;
	}
	B = B % len;
	int k = B;
	if (A->next == NULL || k==0){
		return A;
	}
	int step = len-k;
	ListNode* mid_ptr = A;
	while(step-- && step>0){
		mid_ptr = mid_ptr->next;
	}
	cout << mid_ptr->data << "\n";
	ListNode* new_start = mid_ptr->next;
	ListNode* end = mid_ptr;
	while(end->next!=NULL){
		end = end->next;
	}
	end->next = A;
	mid_ptr->next = NULL;
	return new_start;

}

int main(){
	int n = 2;
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	root->next->next->next = new_node(4);
	root->next->next->next->next= new_node(5);
	// root->next->next->next->next->next = new_node(21);
	// root->next->next->next->next->next->next = new_node(69);
	// cout << "ffF";
	ListNode* res = rotateList(root, n);
	// ListNode* res = root;
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}