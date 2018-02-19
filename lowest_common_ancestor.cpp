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

bool findPath(node* root, vi &path, int k){
    if(root == NULL){
        return false;
    }
    path.PB(root->data);
    if(root->data == k){
        return true;
    }
    if ( (root->left && findPath(root->left, path, k)) || (root->right && findPath(root->right, path, k)) ){
        return true;
    }

    path.pop_back();
    return false;
}

int findLCA(node* root, int n1, int n2){
    vi path1, path2;
    if(!findPath(root, path1, n1) || !findPath(root, path2, n2)){
        return -1;
    }
    int i;
    for(int i=0; i<path1.size() && i<path2.size(); i++){
        if(path1[i] != path2[i]){
            break;
        }
    }
    return path1[i-1];
}

int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5) << '\n';
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6) << '\n';
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4) << '\n';
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4) << '\n';
    return 0;
}