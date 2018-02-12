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

vi flip(string A){
    int sum=0, finalSum=0, start=0, end=0;
    vi res(2,0);
    if(A.length == 1 && A[0] == '1'){
        return;
    }
    loop(i,0,A.length()){
        if(A[i] == '0'){
            sum++;
        }
        else{
            sum--;
        }
        if(sum < 0){
            sum = 0;
            start = i+1;
        }
        if(sum > finalSum){
            finalSum = sum;
            res[0] = start;
            res[1] = i;
            end = i;
        }
    }
    if(res[0] != -1 && res[1] != -1){
        res[0] = res[0]+1;
        res[1] = res[1]+1;
    }
    return res;
}

int main(){
    string A;
    cin >> A;
    vi res = flip(A);
    loop(i,0,res.size()){
        cout << res[i] << ' ';
    }
    return 0;
}