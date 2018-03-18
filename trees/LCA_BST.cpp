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

node* LCA(node* root, int a, int b){
	if(root->data > max(a,b)){
		LCA(root->left, a, b);
	}
	else if(root->data < min(a,b)){
		LCA(root->right, a, b);
	}
	else{
		return root;
	}
}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	cout << LCA(root, 14, 10)->data << "\n";
	return 0;
}