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

int maxArr(vi &A){
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
    int ans = INT_MIN;
    int size = A.size();
    loop(i,0,size){
        max1 = max(max1, A[i]+i);
        max2 = max(max2, -A[i]+i);
        max3 = max(max3, A[i]-i);
        max4 = max(max4, -A[i]-i);
    }
    loop(i,0,size){
        ans = max(ans, max1-A[i]-i);
        ans = max(ans, max2 + A[i] - i);
        ans = max(ans, max3 - A[i] + i);
        ans = max(ans, max4 + A[i] + i);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    int res = maxArr(arr);
    cout << "result: " << res << '\n';
    return 0;
}