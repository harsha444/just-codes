#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector< pair<int,int> >
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

struct node{
	int data;
	struct node* right;
	struct node* left;
};

node* NewNode(int data){
	node* temp = new node();
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

void getVerticalOrder(node* root, int hd, map< int,vi > &m){
	if(root == NULL){
		return;
	}
	m[hd].PB(root->data);
	getVerticalOrder(root->left, hd-1, m);
	getVerticalOrder(root->right, hd+1, m);
}

void printVerticalOrder(node* root){
	map< int,vi > m;
	int hd = 0;
	getVerticalOrder(root, hd, m);
	for(auto it=m.begin(); it!=m.end(); it++){
		for (int i = 0; i < it->second[i]; ++i)
		{
			cout << it->second[i] << " ";
		}
		cout << '\n';
	}
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