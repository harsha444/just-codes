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

void Merge(vi &L, vi &R, vi &arr){
    int i=0,j=0,k=0;
    while(i < L.size() && j < R.size()){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
            k++;
        }
        else{
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    while(i < L.size()){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < R.size()){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vi &arr){
    int sz = arr.size();
    if(sz < 2){
        return;
    }
    int mid = sz/2;
    vi L(mid);
    vi R(sz-mid);
    loop(i,0,mid){
        L[i] = arr[i];
    }
    loop(i,mid,sz){
        R[i-mid] = arr[i];
    }
    mergeSort(L);
    mergeSort(R);
    Merge(L, R, arr);
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    mergeSort(arr);
    loop(i,0,n){
        cout << arr[i] << ' ';
    }
    return 0;
}