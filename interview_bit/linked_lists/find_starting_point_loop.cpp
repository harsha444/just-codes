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

ListNode* detectCycle(ListNode* A){
	if(A && A->next){
		return NULL;
	}
	ListNode* slow = A;
	ListNode* fast = A;
	while(slow && fast){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			break;
		}
	}
	cout << "1" << "\n";
	if(slow != fast){
		return NULL;
	}
	cout << "2"<< "\n";
	slow = A;
	while(slow!=fast){
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}

int main(){
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	ListNode* x = root->next->next;
	root->next->next->next = new_node(4);
	root->next->next->next->next=new_node(5);
	root->next->next->next->next->next= x;

	ListNode* temp = root;
	// int count = 0;
	// while(count < 10){
	// 	cout << temp->data << "\n";
	// 	count++;
	// 	temp = temp->next;
	// }

	ListNode* res = detectCycle(root);
	cout << res << "\n";
	return 0;
}