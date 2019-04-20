// #include <bits/stdc++.h>

// using namespace std;

// struct node{
// 	int data;
// 	node* left;
// 	node* right;
// };

// node* createNode(int data){
// 	node* new_node = new node();
// 	new_node->data = data;
// 	new_node->left = NULL;
// 	new_node->right = NULL;
// 	return new_node;
// }

// node* createBST(vector<int> &v, int start, int end){
// 	if(start>end){
// 		return NULL;
// 	}
// 	int mid = (start+end)/2;
// 	int curr_data = v[mid];
// 	node* curr = createNode(curr_data);
// 	curr->left = createBST(v, start, mid-1);
// 	curr->right = createBST(v, mid+1, end);
// 	return curr;
// }

// void preOrder(node* root){
// 	if(root==NULL){
// 		return;
// 	}
// 	cout << root->data << " ";
// 	preOrder(root->left);
// 	preOrder(root->right);
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	vector<int> v(n);
// 	for(int i=0; i<n; i++){
// 		cin >> v[i];
// 	}
// 	int start = 0;
// 	int end = n-1;

// 	node* res = createBST(v, start, end);
// 	preOrder(res);
// 	return 0;
// }

#include<iostream>
#include <bits/stdc++.h>

int main(){
	
}