#include <bits/stdc++.h>

using namespace std;


struct node{
	struct node* left;
	struct node* right;
	int data;
};

node* newNode(int n){
	node* temp = new node();
	temp -> data = n;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}


int diameter(node* root){
	if(root == NULL){
		return 0;
	}

	int lheight = height(root->left);
	int rheight = height(root->right);
	int ldiameter = diameter(root->left);
	int rdiameter = diameter(root->right);

	// cout << lheight+rheight << " ";
	// cout << max(ldiameter, rdiameter); 
	return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}


int main(){
	node* root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3); 
	root->left->left  = newNode(4);
	root->left->right = newNode(5);
	cout << diameter(root) << '\n';
	return 0;
}


// Optimized
// int diameterOpt(struct node *root, int* height)
// {

//   int lh = 0, rh = 0;
  
//   int ldiameter = 0, rdiameter = 0;
  
//   if(root == NULL)
//   {
//     *height = 0;
//      return 0; 
//   }
  
//   ldiameter = diameterOpt(root->left, &lh);
//   rdiameter = diameterOpt(root->right, &rh);
  
//   *height = max(lh, rh) + 1;
  
//   return max(lh + rh + 1, max(ldiameter, rdiameter));
// }