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

void bottomViewUtil(node* root, int curr, int hd, map < int, pair< int, int > > &m){
	if(root == NULL){
		return;
	}
	if(m.find(hd) == m.end()){
		m[hd] = make_pair(root->data, curr);
	}
	else{
		pair <int, int> p = m[hd];
		if(p.second <= curr){
			m[hd].second = curr;
			m[hd].first = root->data;
		}
	}

	bottomViewUtil(root->left, curr+1, hd-1, m);
	bottomViewUtil(root->right, curr+1, hd+1, m);
}

void bottomView(node* root){
	// pair has height and data in it curr is current height
	map< int, pair < int, int > > m;
	bottomViewUtil(root, 0, 0 , m);
	map < int, pair < int, int > > ::iterator it;
    for (auto i:m)
    {
        pair < int, int > p = i.second;
        cout << p.first << " ";
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
	bottomView(root);
	return 0;
}