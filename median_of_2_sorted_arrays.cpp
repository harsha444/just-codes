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

int findMedian(vi &arr1, vi &arr2, int n){
    if(n==1){
        if(arr1[0] != arr2[0]){
            return (arr1[0]+arr2[0])/2;
        }
        else{
            return arr1[0];
        }
    }
}

int main(){
    int n;
    cin >> n;
    vi arr1(n),arr2(n);
    loop(i,0,n){
        cin >> arr1[i];
    }
    loop(j,0,n){
        cin >> arr2[j];
    }

    int res = findMedian(arr1,arr2,n);
    return 0;
}