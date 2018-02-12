#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
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

vi wave(vi &arr){
    for(int i=0; i<arr.size(); i+=2){
        if(i>0 && arr[i] < arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(i<arr.size()-1 && arr[i] <  arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return arr;

}

vi wave_lexo(vi &arr){
    sort(all(arr));
    for(int i=0; i<arr.size()-1; i=i+2){
        swap(arr[i], arr[i+1]);
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    vi arr(n);
    loop(i,0,n){
        cin >> arr[i];
    }
    vi result = wave(arr);
    loop(i,0,result.size()){
        cout << arr[i] << ' ';
    }
    // vi lexo_result = wave_lexo(vi &arr);
    // loop(i,0,result.size()){
    //     cout << arr[i] << ' ';
    // }
    return 0;
}