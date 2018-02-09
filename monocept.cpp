/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

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

int minDivisions(int n){
    int count=0;

    for(int i=2; i<=n; i++){
        if(n == 1){
            break;
        }
        if((n%i) == 0 && n!=1){
            n = n/i;
            count++;
            i=1;
        }
    }
    return count;
}

vi findDivisionsArray(vi arr){
    ll arr_size = arr.size();
    vi fact_n(arr_size);
    REP(i,0,arr_size){
        fact_n[i] = minDivisions(arr[i]);
    }
    return fact_n;
}

int findResult(int num, vi fact_n){
    int res = 0;
    int i = 0;
    while(num > 0 && i < fact_n.size()){
        num = num - fact_n[i];
        if(num >= 0){
            res++;
        }
        i++;
    }
    return res;
}

int main(){
    ll n,q;
    cin >> n >> q;
    vi arr(n);
    REP(i,0,n){
        cin >> arr[i]; 
    }

    vi fact_n(n);
    fact_n = findDivisionsArray(arr);
    sort(fact_n.begin(), fact_n.end());

    while(q--){
        int num;
        cin >> num;
        int result = findResult(num, fact_n);
        cout << result << '\n';
        
    }
    return 0;
}