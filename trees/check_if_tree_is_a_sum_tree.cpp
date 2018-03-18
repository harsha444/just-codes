#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>

// https://www.youtube.com/watch?v=zEIWqb8nWDk

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

void isSumTree(node* root){
	if(root == NULL){
		return 1;
	}
	if(root->left == NULL && root->right == NULL){
		return 1;
	}
	int left_sum = isSumTree(root->left);
	int right_sum = isSumTree(root->right);
	int total = left_sum + right_sum;
	if(root->data == total){
		if(isSumTree(root->left) && isSumTree(root->right)){
			return 1;
		}
	}
	return 0;
}

int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	cout << isSumTree(root) << "\n";
	return 0;
}