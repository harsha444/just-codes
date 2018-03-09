#include <bits/stdc++.h>

using namespace std;

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

int isBST(node* root, int x, int y){
	if(root == NULL){
		return 1;
	}
	if(root->data<=x || root->data >y){
		return 0;
	}
	return isBST(root->left, x, root->data) && isBST(root->right, root->data, y);
}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	cout << isBST(root, INT_MIN, INT_MAX) << "\n";
	return 0;
}