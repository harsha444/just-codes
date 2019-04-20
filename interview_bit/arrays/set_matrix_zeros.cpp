#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void setZeros(std::vector< std::vector<int> > &A){
	unordered_map<int, int> m;
	for(int i=0; i<A.size(); i++){
		for(int j=0; j<A[i].size(); j++){
			if(A[i][j] == 0){
				m[i]=1;
				m[j]=1;
			}
		}
	}

	for(int i=0; i<A.size(); i++){
		for(int j=0; j<A[i].size(); j++){
			if(m[i]>0){
				if(i == 0){
				A[i][j] = 0;					
				}
			}
			if(m[j]>0){
				if()
				A[i][j] = 0;
			}
		}
	}

	for(int i=0; i<A.size(); i++){
		for(int j=0; j<A[i].size(); j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int n;
	cin >> n;
	std::vector< std::vector<int> > A(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<A[i].size(); j++){
			cin >> A[i][j];
		}
	}

	setZeros(A);
}