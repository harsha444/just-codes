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

vi spiralOrder(vvi &arr, int m, int n){
    vi result;
    // for testing
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = 0; j < arr[i].size(); j++) {
    //         cout << arr[i][j] << '\t';
    //     }
    //     std::cout << '\n';
    // }
    int t = 0, b = m-1, l = 0, r = n-1, dir = 0;
    while(t <= b && l >= r){
        if(dir == 0){
            loop(i,0,r+1){
                result.PB(arr[t][i]);
            }
            t++;
            dir = 1;
        }
        else if(dir == 1){
            loop(i,0,b+1){
                result.PB(arr[i][r]);
            }
            r--;
            dir = 2;
        }
        else if(dir == 2){
            rloop(i,r,l-1){
                result.PB(arr[b][i]);
            }
            b--;
            dir = 3;
        }
        else if(dir == 3){
            loop(i,b,t-1){
                result.PB(arr[i][r]);
            }
            l++;
            dir = 0;
        }
    }
    return result;
}

int main(){
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    vvi arr(m,vi(n));
    vi result;

    loop(i,0,arr.size()){
        loop(j,0,arr[i].size()){
            cin >> arr[i][j];
        }
    }

    result = spiralOrder(arr, m, n);

    loop(i,0,result.size()){
        cout << result[i] << ' ';
    }
    
    return 0;
}