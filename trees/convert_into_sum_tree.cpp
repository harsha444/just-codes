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


void sumTree(node* root){
	if(root == NULL){
		return 0;
	}
	int old_val = root->data;

	root->data = sumTree(root->left) + sumTree(root->right);

	return root->data + old_val;

}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	sumTree(root);
	inorder(root);
	return 0;
}