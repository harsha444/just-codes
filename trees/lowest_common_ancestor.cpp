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
    struct node* left;
    struct node* right;
};

node* newNode(int n){
    node* root = new node();
    root->data = n;
    root->left = NULL;
    root->right = NULL;
    return root;
}

node* findLCA(node* root, int x, int y){
    if(root == NULL){
        return NULL;
    }
    if(root->data == x || root->data == y){
        return root;
    }
    node* left = findLCA(root->left, x, y);
    node* right = findLCA(root->right, x, y); 
    if(left!=NULL && right!=NULL){
        return root;
    }
    else{
        if(left == NULL){
            return right;
        }
        else{
            return left;
        }
    }
}

int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data << '\n';
    cout << "LCA(4, 6) = " << findLCA(root, 4, 6)->data << '\n';
    cout << "LCA(3, 4) = " << findLCA(root, 3, 4)->data << '\n';
    cout << "LCA(2, 4) = " << findLCA(root, 2, 4)->data << '\n';
    return 0;
}