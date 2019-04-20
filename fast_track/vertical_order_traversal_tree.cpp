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

void verticalOrderUtil(node* root, int hd, map< int, vector<int> > &m){
	if(root==NULL){
		return;
	}
	m[hd].push_back(root->data);
	verticalOrderUtil(root->left, hd-1, m);
	verticalOrderUtil(root->right, hd+1, m);
}

void verticalOrder(node* root){
	int hd=0;
	map< int, std::vector<int> > m;
	verticalOrderUtil(root, hd, m);
	map< int, vector<int> > ::iterator it;
	for(auto i:m){
		for(int j=0; j<i.second.size(); j++){
			cout << i.second[j] << " ";
		}
		cout << "\n";
	}
	// for (it=m.begin(); it!=m.end(); it++) 
 //    { 
 //        for (int i=0; i<it->second.size(); ++i) 
 //            cout << it->second[i] << " "; 
 //        cout << endl; 
 //    } 
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
	verticalOrder(root);
	return 0;
}