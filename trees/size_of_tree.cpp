#include <bits/stdc++.h>

using namespace std;

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

int sizeOfTree(node* root){
	if(root == NULL){
		return 0;
	}
	return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

int main(int argc, char const *argv[])
{
	node* root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root ->left->left = newNode(4);
	root -> right->right = newNode(5);
	cout << sizeOfTree(root) << "\n";
	return 0;
}