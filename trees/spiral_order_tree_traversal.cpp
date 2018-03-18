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


void spiralOrder(node* root){
	stack<node*> currLevel;
	stack<node*> nextLevel;
	bool lefttoright = true;
	currLevel.push(root);
	while(!currLevel.empty()){
		node* temp = currLevel.top();
		currLevel.pop();
		if(temp){
			cout << temp->data << " ";
			if(lefttoright){
				if(temp->left){
					nextLevel.push(temp->left);
				}
				if(temp->right){
					nextLevel.push(temp->right);
				}
			}
			else{
				if(temp->right){
					nextLevel.push(temp->right);
				}
				if(temp->left){
					nextLevel.push(temp->left);
				}
			}
		}
		if(currLevel.empty()){
			lefttoright = !lefttoright;
			swap(currLevel, nextLevel);
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
	spiralOrder(root);
	return 0;
}