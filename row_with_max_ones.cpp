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

int rowWithMax1s(int mat[4][4], int R, int C){
	int max = 0;
	int res = 0;
	int col_count = C-1;
	for(int i=0; i<R; i++){
		for(int j=col_count; j>0; j--){
			if(i==0){
				if(mat[i][j] == 1){
					max++;
					res = 0;
					col_count=C-max;
				}
				else{
					break;
				}
			}
			else{
				if(mat[i][j-1] == 1){
					max++;
					res = i;
					col_count = C-max;
				}
				else{
					break;
				}
			}

		}
	}

	cout << "max: " << max << ' ' << "res: " << res << '\n';

	return res;
}


int main()
{

    int mat[4][4] = { {0, 0, 0, 1},
                      {0, 1, 1, 1},
                      {1, 1, 1, 1},
                      {0, 0, 0, 0}};
 
    rowWithMax1s(mat, 4, 4);
 
    return 0;
}