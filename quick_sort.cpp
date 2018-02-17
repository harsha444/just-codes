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

int Partition(vi &arr, int start, int end){
    int pivot = arr[end];
    int pi = start;
    for(int i=start; i<end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[pi]);
            pi++;
        }
    }
    swap(arr[pi],arr[end]);
    return pi;
}

void quickSort(vi &arr, int start, int end){
    if(start < end){
        int pi = Partition(arr, start, end);
        quickSort(arr, start, pi-1);
        quickSort(arr, pi+1, end);
    }
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    loop(i,0,n){
        cout << arr[i] << ' ';
    }
    return 0;
}