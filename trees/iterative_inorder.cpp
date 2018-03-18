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

void inOrder(node* root){
	if(root == NULL){
		return;
	}
	stack<node*> s;
	while(1){
		if(root!=NULL){
			s.push(root);
			root = root->left;
		}
		else{
			if(s.empty()){
				break;
			}
			root = s.top();
			s.pop();
			cout << root->data << " ";
			root = root -> right;
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
	inOrder(root);
	return 0;
}