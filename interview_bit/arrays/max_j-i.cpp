#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findRes(vector<int> &A){
    int sz = A.size();
    vector<int> mini(sz);
    std::vector<int> maxi(sz);
    int min_n = INT_MAX;
    int max_n = INT_MIN;
    for(int i=0; i<sz; i++){
        if(A[i] < min_n){
            min_n = A[i];
            mini[i] = min_n;
        }
        else{
            mini[i] = min_n;
        }
    }

    for(int i=sz-1; i>=0; i--){
        if(A[i]>max_n){
            max_n = A[i];
            maxi[i] = max_n;
        }
        else{
            maxi[i] = max_n;
        }
    }

    int res = 0;
    int i=0, j=0;
    while(i<sz && j<sz){
        if(mini[i]<=maxi[j]){
            if(j-i > res){
                res = j-i;
            }
            j++;
        }
        else{
            i++;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	cout << findRes(A) << "\n";
	return 0;
}