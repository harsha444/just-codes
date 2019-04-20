#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* newNode(int n){
	node* temp = new node();
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void get_map_for_vertical_order(node* root, int hd){
	
}

void printVerticalOrder(node* root){
	map< int, vector<int> > m;
	hd = 0;
	get_map_for_vertical_order(root, hd);
}


int main(){
	node* root = NewNode(1);
	root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left = NewNode(4);
    root->left->right = NewNode(5);
    root->right->left = NewNode(6);
    root->right->right = NewNode(7);
    root->right->left->right = NewNode(8);
    root->right->right->right = NewNode(9);
    cout << "Vertical order traversal is n" << '\n';
    printVerticalOrder(root);
    return 0;
}