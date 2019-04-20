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

ListNode* removeNth(ListNode* A, int B){
	int sz = 0;
	ListNode* temp = A;
	ListNode*res = temp;
	while(A!=NULL){
		sz++;
		A = A->next;
	}
	int n = (sz-B)>=0?sz-B:1;
	if(n==1){
		res = temp->next;
	} else {
		n=n-1;
		while(n--){
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}
	return res;
}

int main(){
	int n = 3;
	ListNode* root = new_node(1);
	root->next = new_node(2);
	root->next->next = new_node(3);
	root->next->next->next = new_node(4);
	root->next->next->next->next= new_node(5);

	ListNode* res = removeNth(root, n);
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}