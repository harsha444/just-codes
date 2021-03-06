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

int checkMirrorTree(node* root1, node* root2){
	if(root1 == NULL && root2 == NULL){
		return 1;
	}
	if(root1 == NULL || root2 == NULL){
		return 0;
	}
	if(root1->data != root2->data){
		return 0;
	}
	else if(checkMirrorTree(root1->left, root2->right) && checkMirrorTree(root1->right, root2->left)){
		return 1;
	}
}

int main(){
	node* root1 = newNode(12);
	root1->left = newNode(9);
	root1->left->right = newNode(10);
	root1->left->left = newNode(8);
	root1->right = newNode(13);
	root1->right->right = newNode(14);
	node* root2 = newNode(12);
	root2->right = newNode(9);
	root2->right->left = newNode(10);
	root2->right->right = newNode(8);
	root2->left = newNode(13);
	root2->left->left = newNode(14);
	cout << checkMirrorTree(root1, root2) << "\n";
	return 0;
}