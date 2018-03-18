#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

// We have to use 2 stacks to solve this problem

struct node
{
	int data;
	node* left;
	node* right;
};

node* newNode(int n){
	node* temp = new node();
	temp->left = NULL;
	temp->right = NULL;
	temp->data = n;
	return temp;
}


void postOrder(node* root){
	if(root == NULL){
		return;
	}
	stack<node*> s1;
	stack<node*> s2;
	s1.push(root);
	while(!s1.empty()){
		node* temp = s1.top();
		s1.pop();
		s2.push(temp);
		if(temp->left!=NULL){
			s1.push(temp->left);
		}
		if(temp->right!=NULL){
			s1.push(temp->right);
		}
	}
	while(!s2.empty()){
		node* temp = s2.top();
		s2.pop();
		cout << temp->data << " ";
	}
}

int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	postOrder(root);
	return 0;
}