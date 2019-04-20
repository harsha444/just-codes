#include<bits/stdc++.h>

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

ListNode* reorderList(ListNode* A){
	ListNode* temp = A;
	ListNode* mid_ptr = A;
	ListNode* end_ptr = A;
	ListNode* first_list_end = A;
	while(end_ptr && end_ptr->next){
		first_list_end = mid_ptr;
		mid_ptr = mid_ptr->next;
		end_ptr = end_ptr->next->next;
	}
	// cout << first_list_end->data << "\n";
	ListNode* curr = mid_ptr->next;
	ListNode* prev = mid_ptr;
	ListNode* next1 = NULL;
	prev->next = NULL;
	while(curr!=NULL){
		next1 = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next1;
	}
	first_list_end->next = NULL;
	
	// merging
	ListNode* dummy = new_node(0);
	ListNode* res = dummy;
	// cout << "yoyooy" <<"\n";
	// while(temp){
	// 	cout << temp->data << "\n";
	// 	temp = temp->next;
	// }
	// cout << "======";
	// while(prev){
	// 	cout << prev->data << "\n";
	// 	prev = prev->next;
	// }
	// cout << "okk";
	while(temp || prev){
		if(temp){
			dummy->next = temp;
			dummy=dummy->next;
			temp = temp->next;
		}
		if(prev){
			dummy->next = prev;
			dummy = dummy->next;
			prev=prev->next;
		}
	}
	// cout << prev->data<< "\n";
	return res->next;
}

int main(){
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	root->next->next->next = new_node(4);
	root->next->next->next->next= new_node(5);

	ListNode* res = reorderList(root);
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}