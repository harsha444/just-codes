#include <bits/stdc++.h>

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

bool sumTreeUtil(node* root, int sum, std::vector<int> &v){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL && root->right==NULL){
		if(sum-root->data == 0){
			v.push_back(root->data);
			return 1;
		}
		else{
			return 0;
		}
	}
	if(sumTreeUtil(root->left, sum-root->data, v)){
		v.push_back(root->data);
		return 1;
	}
	if(sumTreeUtil(root->right, sum-root->data, v)){
		v.push_back(root->data);
		return 1;
	}
	return 0;
}

void sumTreePath(node* root, int sum){
	vector<int> res;
	sumTreeUtil(root, sum, res);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
	return;
}

int main(int argc, char const *argv[])
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	int sum;
	cin >> sum;
	sumTreePath(root, sum);
	return 0;
}