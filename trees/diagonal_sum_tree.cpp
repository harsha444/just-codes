#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>

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

void diagonalSumUtil(node* root, int vd, map<int, int> &diagonal_sum){
	if(!root){
		return;
	}
	diagonal_sum[vd]+=root->data;
	diagonalSumUtil(root->left, vd+1, diagonal_sum);
	diagonalSumUtil(root->right, vd, diagonal_sum);
}

void diagonalSum(node* root){
	map<int, int> diagonal_sum;
	diagonalSumUtil(root, 0, diagonal_sum);
	for(auto i:diagonal_sum){
		cout << i.second << " ";
	}
}

int main(){

    node* root = newNode(20);
    root -> left = newNode(8);
    root -> right = newNode(22);
    root -> left -> left = newNode(5);
    root -> left -> right = newNode(3);
    root -> right -> left = newNode(4);
    root -> right -> right = newNode(25);
    root -> left -> right -> left = newNode(10);
    root -> left -> right -> right = newNode(14);
	diagonalSum(root);
	return 0;
}