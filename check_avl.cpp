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
    node* temp = new node();
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int isAVL(node* root){
    int lh,rh;
    if(root == NULL){
        return 1;
    }
    lh = height(root->left);
    rh = height(root->right);

    if(abs(lh-rh)<=1 && isAVL(root->left) && isAVL(root->right)){
        return 1;
    }
    return 0;
}

int main(){
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8); 

    if(isAVL(root)){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
    return 0; 
}