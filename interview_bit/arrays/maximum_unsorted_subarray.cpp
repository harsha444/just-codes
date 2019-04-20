#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxUnsorted(std::vector<int> &A){
	int sz = A.size();
	int ptr1, ptr2;
	for(int i=0; i<A.size()-1; i++){
		if(A[i+1]<A[i]){
			ptr1 = i;
			break;
		}
	}
	if(ptr1 == A.size()){
		cout << -1;
	}
	for(int i=sz-1; i>0; i--){
		if(A[i-1]>A[i]){
			ptr2 = i;
			break;
		}
	}
	int min_i = ptr1, max_i = ptr2;
	int min_v = INT_MAX;
	

}

int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for(int i=0; i<A.size(); i++){
		cin >> A[i];
	}

	maxUnsorted(A);
}