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

vll repeatedNumber(vll &arr){
    ll n = arr.size();
    vll result;
    ll gs=0,gs2=0;
    ll ns = ((n)*(n+1))/2;
    ll ns2 = ((n)*(n+1)*(2*n+1))/6;
    loop(i,0,arr.size()){
        ns-=arr[i];
        ns2-=(arr[i]*arr[i]);
    }
    ll repeated_number = (1/2.0)*((ns) + ((ns2)/(ns)));
    result.PB(repeated_number);
    ll missing_number = repeated_number-ns;
    result.PB(missing_number);
    return result;
}

int main(){
    ll n;
    cin >> n;
    vll arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    vll res = repeatedNumber(arr);
    cout << res[0] << ' ' << res[1];
    return 0;
}