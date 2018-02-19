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

vpii nextGreaterElement(vi &arr){
    stack<int> S;
    vpii res;
    S.push(arr[0]);
    for(int i=1; i<arr.size(); i++){
        while(!S.empty() && (arr[i] > S.top())){
            res.PB(MP(S.top(),arr[i]));
            // cout << S.top() << " next largest element is " << arr[i] << '\n';
            S.pop();
        }
        S.push(arr[i]);
    }
    while(!S.empty()){
        res.PB(MP(S.top(),0));
        // cout << S.top() << " next largest element is null" << '\n';
        S.pop();
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    vpii res = nextGreaterElement(arr);
    for(int i=0; i<res.size(); i++){
        cout << res[i].F << " element next biggest is " << res[i].S << '\n';
    }
    return 0;
}