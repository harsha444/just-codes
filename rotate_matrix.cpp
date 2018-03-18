#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define mp make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

void reverseColumns(int a[4][4], int n){
	for (int i=0; i<n; i++){
        for (int j=0,  k=n-1; j<k; j++,k--){
            swap(a[j][i], a[k][i]);
        }
	}
}

void transpose(int a[4][4], int n){
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			swap(a[i][j],a[j][i]);
		}
	}
}

void printMatrix(int a[4][4], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

void rotateMatrix(int a[4][4], int n){
	transpose(a, n);
	reverseColumns(a, n);
	printMatrix(a, n);
}

int main(){
int mat[4][4] = { {10, 20, 30, 40},
                  {15, 25, 35, 45},
                  {27, 29, 37, 48},
                  {32, 33, 39, 50},
                  };
	rotateMatrix(mat, 4);
}