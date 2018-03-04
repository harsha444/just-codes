#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
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

void search(int mat[4][4], int R, int C, int n){
	int i=0;
	int j=R-1;
	while(i<R && j>=0){
		if(mat[i][j] == n){
			cout << "Found!! At: " << i << ' ' << j << '\n';
			return;
		}
		else if(mat[i][j] > n){
			j--;
		}
		else{
			i++;
		}
	}
	cout << "Not found kid :(" << '\n';
}

int main(){
int mat[4][4] = { {10, 20, 30, 40},
                  {15, 25, 35, 45},
                  {27, 29, 37, 48},
                  {32, 33, 39, 50},
                  };
  search(mat, 4, 4, 7);

}