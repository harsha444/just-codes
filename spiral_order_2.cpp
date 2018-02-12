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

vvi generateSpiralMatrix(int n){
    vvi result(n,vi(n));
    int t=0, b=n-1, l=0, r=n-1, dir=0;
    int fill=1;
    while(fill <= n*n){
        // cout << fill << ' ';
        if(dir == 0){
            loop(i,l,r+1){
                result[t][i] = fill;
                fill++;
            }
            t++;
            dir=1;
        }
        else if(dir == 1){
            loop(i,t,b+1){
                result[i][r] = fill;
                fill++;
            }
            r--;
            dir = 2;
        }
        else if(dir == 2){
            rloop(i,r,l-1){
                result[b][i] = fill;
                fill++;
            }
            b--;
            dir = 3;
        }
        else if(dir == 3){
            rloop(i,b,t-1){
                result[i][l] = fill;
                fill++;
            }
            l++;
            dir = 0;
        }
    }
    return result;
}

int main(){
    int n ;
    cin >> n;
    vvi result = generateSpiralMatrix(n);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size();j++){
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}