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

int findPivot(vi arr, int low, int high){
    if(high<low) return -1;
    if(high == low) return low;
    else if(high>low){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else{
            if(arr[low]>=arr[mid]){
                return findPivot(arr,low,mid-1);
            }
            return findPivot(arr,mid+1,high);
        }
    }

}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    int low = 0;
    int high = arr.size()-1;
    cout << "pivot is at: " << findPivot(arr, low, high-1);
    return 0;
}