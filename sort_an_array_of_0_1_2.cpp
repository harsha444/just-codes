#include <iostream>
#include <cmath>
#include <string>
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

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SortArray(vi arr){
    int arr_len = arr.size();
    int ptr1 = 0;
    int ptr2 = arr_len-1;
    int mid_ptr = 0;
    while(mid_ptr <= ptr2){
        switch(arr[mid_ptr]){
            case 0:{
                swap(&arr[ptr1++], &arr[mid_ptr++]);
                break;
            }
            case 1:{
                mid_ptr++;
                break;
            }
            case 2:{
                swap(&arr[mid_ptr], & arr[ptr2--]);
                break;
            }
        }
    }

    REP(i,0,arr_len){
        cout << arr[i] << ' ';
    }
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vi arr(n);
    cout << "Enter the elements: ";
    REP(i,0,n){
        cin >> arr[i];
    }
    SortArray(arr);
}