#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector< pair<int,int> >

// https://www.youtube.com/watch?v=qjD-CmuC0MQ

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

int printAncestors(node* root, int n){
	if(root != NULL){
		if(root->data == n){
			return 1;
		}
		if(printAncestors(root->left, n) || printAncestors(root->right, n)){
			cout << root->data << " ";
			return 1;
		}
		return 0;
	}
}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	printAncestors(root, 10);
	return 0;
}