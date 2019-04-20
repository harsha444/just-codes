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

// Alternate solution
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void SortArray(vector<int> &vect){
//     int sp=0,ep=vect.size()-1,i=0;
//     while(i<=ep){
//         switch(vect[i]){
//             case 0:{
//                 swap(vect[sp], vect[i]);
//                 sp++;
//                 i++;
//                 break;
//             }
//             case 1:{
//                 i++;
//                 break;
//             }
//             case 2:{
//                 swap(vect[i], vect[ep]);
//                 ep--;
//                 break;
//             }
//         }
//     }
    
//     for(int i=0; i<vect.size(); i++){
//         cout << vect[i] << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     //code
//     int n;
//     cin >> n;
//     while(n--){
//         int len;
//         cin >> len;
//         vector<int> vect(len);
//         for(int i=0; i<len; i++){
//             cin >> vect[i];
//         }
//         SortArray(vect);
//     }
//     return 0;
// }