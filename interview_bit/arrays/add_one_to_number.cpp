#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> addOne(std::vector<int> A){
	int c=0,s=0;
	for(int i=A.size()-1; i>=0; i--){
		if(i == A.size()-1){
			A[i] = A[i]+1;
			if(A[i]>9){
				c = 1;
				A[i] = A[i]-10;
			}
		}
		else{
			A[i] = A[i] + c;
			if(A[i]>9){
				A[i] = A[i] - 10;
				c = 1;
			}
			else{
				c = 0;
			}
		}
	}
	if(c > 0){
		A.insert(A.begin(), 1);
	}
	int check_zeros = 0;
	for(int i=0; i<A.size(); i++){
		if(A[i] == 0){
			check_zeros++;
		}
		else{
			break;
		}
	}
	return vector<int>(A.begin()+check_zeros, A.end());
}

int main(){
	int len;
	cin >> len;
	vector<int> vect(len);
	for(int i=0; i<vect.size(); i++){
		cin >> vect[i];
	}

	vector<int> res = addOne(vect);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
	cout << "\n";
	return 0;
}