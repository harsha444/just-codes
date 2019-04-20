#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// int checkRes(vector<int> A){
// 	// 	for(int i=0; i<A.size(); i++){
// 	// 	cout << A[i] << " ";
// 	// }

// 	for(int i=0; i<A.size(); i++){
// 		// cout << A[i] << "&&" << abs(A[i]) << "&&" << -A[abs(A[i])] <<"\n";
// 		if(abs(A[i])-1<A.size() && A[abs(A[i])-1]>0){
// 			A[abs(A[i])-1] = -1 * A[abs(A[i])-1];
// 			// cout << "val:" << A[abs(A[i])] << " ";
// 		}
// 	}
// 	// for(int i=0; i<A.size(); i++){
// 	// 	cout << A[i] << " ";
// 	// }
// 	int res = 0;
// 	for(int i=0; i<A.size(); i++){
// 		if(A[i]>0){
// 			return i+1;
// 		}
// 	}
// 	return A.size()+1;
// }

int firstMissing(vector<int> &A){
	int ptr=0;
	for(int i=0; i<A.size(); i++){
		if(A[i]<=0){
			swap(A[i], A[ptr]);
			ptr++;
		}
	}
	if(ptr>=A.size()){
		return 1;
	}

	for(int i=ptr; i<A.size(); i++){
        if(abs(A[i])-1<A.size()-ptr && A[abs(A[i])-1+ptr]>0){
            A[abs(A[i])-1+ptr] = -1 * A[abs(A[i])-1+ptr];
        }
	}
	int res = 0;
    for(int i=ptr; i<A.size(); i++){
        if(A[i]>0){
            return i-ptr+1;
        }
    }
    return A.size()-ptr+1;
	// return checkRes(std::vector<int> (A.begin()+ptr, A.end()));
}

int main(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}

	cout << firstMissing(A) << "\n";
	return 0;
}