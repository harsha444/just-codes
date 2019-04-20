#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>

//modification of https://www.geeksforgeeks.org/print-level-order-traversal-line-line/ ->easy

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

void noOflevels(node* root){
	queue<node*> q;
	q.push(root);
	int level = 0;
	while(1){
		int nodeCount = q.size();
		if(nodeCount == 0){
			break;
		}
		while(nodeCount>0){
			node* temp = q.front();
			// cout << temp->data << " ";
			q.pop();
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
			nodeCount--;
		}
		// cout << '\n';
		level++;
	}
	cout << "levels: " << level << '\n';
}

int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	noOflevels(root);
	return 0;
}
