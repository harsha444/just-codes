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


void mirrorTree(node* root){
	if(root == NULL){
		return;
	}
	else{
		mirrorTree(root->left);
		mirrorTree(root->right);
		swap(root->left, root->right);
	}
}

void inorder(node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	mirrorTree(root);
	inorder(root);
	return 0;
}