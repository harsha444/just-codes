#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};

Node* new_node(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	return temp;
}

Node* removeDuplicates(Node* A){
	Node* temp = A;
    Node* prev = NULL;
    if(temp->next == NULL){
        return temp;
    }
    while(temp!= NULL && temp->next != NULL){
        if(temp->data == temp->next->data){
        	// cout << temp->data << " " << temp->next->data << "\n";
            if(prev == NULL){
                int res = temp->data;
                while(temp!= NULL && temp->data == res){
                    temp = temp->next;
                }
                A = temp?temp:NULL;
            } else {
                int res = temp->data;
                while(temp != NULL &&temp->data == res){
                    temp = temp->next;
                }
                prev->next = temp;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return A;
}

int main(){
	int n;
	Node* root = new_node(1);
	root->next = new_node(1);
	root->next->next = new_node(1);

	Node* res = removeDuplicates(root);
	while(res != NULL){
		cout << res->data << " ";
		res = res -> next;
	}
	return 0;
}