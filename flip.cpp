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
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

vi flip(string A){
    int n = A.length();
    vi arr(n);
    loop(i,0,n){
        if(A[i]=='1')
        {
            arr[i]=-1;
        }
        else arr[i]=1;
    }
    pii res = MP(INT_MAX, INT_MAX);
    int total_max=0, max_here=0, start=0;
    loop(i,0,n){
        if(max_here + arr[i] < 0){
            start = i+1;
            max_here = 0;
        }
        else{
            max_here = max_here + arr[i];
        }
        if(total_max < max_here){
            total_max = max_here;
            res.F = start;
            res.S = i;
        }
    }

    if(res.F == INT_MAX){
        return vi();
    }
    vi result;
    result.PB(res.F+1);
    result.PB(res.S+1); 
    return result;
}

int main(){
    string A;
    cin >> A;
    vi res = flip(A);
    loop(i,0,res.size()){
        cout << res[i] << ' ';
    }
    return 0;
}