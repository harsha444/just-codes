#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>


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

void preOrder(node* root){
	stack<node*> s;
	s.push(root);
	while(!s.empty()){
		node* temp = s.top();
		s.pop();
		cout << temp -> data << " ";
		if(temp->right){
			s.push(temp->right);
		}
		if(temp->left){
			s.push(temp->left);
		}
	}
}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	preOrder(root);
	return 0;
}