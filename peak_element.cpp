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

int peakElement(vi &arr, int start, int end){
    if(start <= end){
        int mid = (start+end)/2;
        if((mid==0 || arr[mid] >= arr[mid-1]) && (mid == arr.size()-1 || arr[mid] >= arr[mid+1])){
            return arr[mid];
        }
        else if(arr[mid] < arr[mid-1] && mid>0){
            return peakElement(arr, start, mid-1);
        }
        else{
            return peakElement(arr, mid+1, end);
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    int start = 0;
    int end = arr.size()-1;
    int res = peakElement(arr, start, end);
    cout << res << '\n';
}