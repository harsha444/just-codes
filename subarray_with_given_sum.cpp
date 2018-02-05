#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;

#define PB push_back
#define F first
#define S second
#define REP(i,a,b) for(int i=a; i<b; i++)

int main(){
    int num;
    int found = 0;
    cout << "Enter the size of array: ";
    cin >> num;
    vi arr(num);
    cout << "Enter the elements: ";
    REP(i,0,num){
        cin >> arr[i];
    }
    int curr_sum = arr[0],i,start=0;
    int n;
    cout << "Enter the sum required: ";
    cin >> n;

    REP(i,1,num+1){
        while(curr_sum > n && start < i-1){
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if(curr_sum == n){
            cout << "Found b/w: " << start << " " << i-1 << '\n';
            found = 1;
            break;
        }
        if(i < num){
            curr_sum = curr_sum + arr[i];
        }
    }
    if(!found){
        cout << "No subarray found!" << '\n';
    }
    return 0;
}