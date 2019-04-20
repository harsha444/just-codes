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

ListNode* addTwoNumbers(ListNode* A, ListNode* B){
	if(A==NULL){
		return B;
	}
	if(B==NULL){
		return A;
	}
	int carry = 0, sum=0;
	ListNode* dummy = new_node(0);
	ListNode* temp = dummy;
	while(A!=NULL && B!=NULL){
		int t_sum = A->data + B->data + carry;
		sum = t_sum%10;
		carry = t_sum/10;
		cout << carry;
		temp->next = new_node(sum);
		temp = temp->next;
		// cout << temp->data << "\n";
		A = A->next;
		B = B->next;
	}
	if(A == NULL){
		while(B != NULL){
			int t_sum = B->data + carry;
			sum = t_sum%10;
			carry = t_sum/10;
			temp->next = new_node(sum);
			B = B->next;
			temp = temp->next;
		}
	}
	if(B == NULL){
		while(A != NULL){
			int t_sum = A->data + carry;
			sum = t_sum%10;
			carry = t_sum/10;
			temp->next = new_node(sum);
			A = A->next;
			temp = temp->next;
		}
	}
	ListNode* temp1 = dummy->next;
	ListNode* temp2 = dummy->next;
	int len = 0;
	int zer = 0;
	while(temp2){
		if(temp2->data == 0){
			zer+=1;
		}
		len+=1;
		temp2 = temp2->next;
	}
	while(temp1){
		if(len == zer){
			
		}
	}


	return dummy->next;
}

int main(){
	ListNode* root1 = new_node(9);
	root1->next = new_node(4);
	// root1->next->next = new_node(3);

	ListNode* root2 = new_node(5);
	// root2->next = new_node(6);
	// root2->next->next = new_node(4);

	ListNode* res = addTwoNumbers(root1, root2);
	while(res != NULL){
		cout << res->data << " ";
		res = res->next;
	}
	return 0;
}