#include <bits/stdc++.h>

using namespace std;

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

 int sumExists(node* root, int sum, vi &res){
 	if(root == NULL){
 		return 0;
 	}
 	if(root->left == NULL && root->right == NULL){
 		if(sum - (root->data) == 0){
 			res.push_back(root->data);
 			return 1;
 		}
 		else{
 			return 0;
 		}
 	}
 	if(sumExists(root->left, sum-(root->data), res) || sumExists(root->right, sum-(root->data), res)){
 		res.push_back(root->data);
 		return 1;
 	}
 }

int main(){
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);
	int sum;
	cout << "Enter sum: ";
	cin >> sum;
	vi res;
	// cout << sumExists(root, sum, res) << "\n";
	if(sumExists(root, sum, res)){
		for(int i=0; i<res.size(); i++){
			cout << res[i] << " ";
		}
	}
	else{
		cout << "No path found!" << "\n";
	}

}