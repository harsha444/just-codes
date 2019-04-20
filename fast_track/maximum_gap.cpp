#include<bits/stdc++.h>

using namespace std;

int maximumGap(vector<int> &A){
	int sz = A.size();
	vector<int> mini(sz);
	vector<int> maxi(sz);
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
		if(A[i] > max_n){
			max_n = A[i];
			maxi[i] = max_n;
		}
		else {
			maxi[i] = max_n;
		}
	}

	int i=0,j=0;
	int res = 0;
	while(i<=sz && j<=sz){
		if(mini[i]<=maxi[j]){
			
		}
	}
}

int main(){
	int n;
	vector<int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	int res = maximumGap(A);
}