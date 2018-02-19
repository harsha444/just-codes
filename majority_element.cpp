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

int findCount(int n, vi &arr){
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        arr[i] == n ? count++ : count;
    }
    return (count > arr.size()/2) ? n : 0;
}

int findMajorityElement(vi &arr){
    int candidate=0;
    int count = 0;
    // for(int i=0;i<arr.size(); i++){
    //     cout << arr[i] << ' ';
    // }
    for(int i=0; i<arr.size(); i++){
        if(count == 0){
            candidate = arr[i];
            count=1;
            continue;
        }
        else{
            if(candidate == arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    return findCount(candidate, arr);
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = findMajorityElement(arr);
    cout << res;
    return 0;
}