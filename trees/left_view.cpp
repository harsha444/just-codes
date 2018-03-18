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

void leftView(node* root){
	queue<node *> q;
	q.push(root);
	vvi res(3);
	int level = 0;
	int step = 1;
	while(1){
		int nodeCount = q.size();
		if(nodeCount == 0){
			break;
		}
		while(nodeCount>0){
			node* temp = q.front();
			if(step == 1){
				cout << temp->data << " ";
				step = 0;
			}
			res[level].push_back(temp->data);
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
		// cout << "\n";
		level++;
		step = 1;
	}

	// for(int i=0; i<res.size(); i++){
	// 	for(int j=0; j<res[i].size(); j++){
	// 		cout << res[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }
}


int main(){
	node* root = newNode(12);
	root->left = newNode(9);
	root->left->right = newNode(10);
	root->left->left = newNode(8);
	root->right = newNode(13);
	root->right->right = newNode(14);
	leftView(root);
	return 0;
}