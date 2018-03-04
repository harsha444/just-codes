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

double findMedian(vi &arr, int start, int end){
    int indexDiff = end-start;
    if( indexDiff % 2 == 0){ //Odd number of elements
        return arr[start + (indexDiff/2)];
    }
    else{
        return 1.0 * (arr[start + (indexDiff/2)] + arr[start + (indexDiff/2) + 1])/2;
    }

}

int findMedianofTwoArrays(vi &arr1, vi &arr2, int start1, int end1, int start2, int end2){
    if((end1-start1 == 0)&&(end2-start2 == 0)){
        return (arr1[0]+arr2[0])/2;
    }
    if((end1-start1 == 1)&&(end2-start2 == 1)){
        return (1.0*(max(arr1[start1], arr2[start1]) + min(arr1[end1],arr2[end2])))/2;
    }

    double m1 = findMedian(arr1, start1, end1);
    double m2 = findMedian(arr2, start2, end2);
    if(m1 == m2){
        return m2;
    }
    if(m1<m2){
        if((end1 - start1)%2 == 0){
            start1 = start1 + (end1 - start1)/2;
            end2 = start2 + (end2 - start2)/2;
        }
        else{
            start1 = start1 + (end1 - start1)/2;
            end2 = start2 + (end2 - start2)/2 + 1;
        }
    }
    else{
        if((end2 - start2)%2 == 0){
            start2 = start2 + (end2 - start2)/2;
            end1 = start1 + (end1 - start1)/2;
        }
        else{
            start2 = start2 + (end2 - start2)/2;
            end1 = start1 + (end1 - start1)/2 + 1;
        }
    }
    return findMedianofTwoArrays(arr1, arr2, start1, end1, start2, end2);
}

int main(){
    int n;
    cin >> n;
    vi arr1(n),arr2(n);
    loop(i,0,n){
        cin >> arr1[i];
    }
    loop(j,0,n){
        cin >> arr2[j];
    }

    int res = findMedianofTwoArrays(arr1,arr2,0,n-1,0,n-1);
    return 0;
}