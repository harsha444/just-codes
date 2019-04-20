#include<iostream>
#include<bits/stdc++.h>

using namespace std;


vector<int> SpiralOrder(vector< vector<int> > &A){
	vector<int> res;
	int m = A.size();
 	int n = A[0].size();
	int dir = 0;
	int t=0, l=0, b=m-1, r=n-1;
	while(t<=b && l<=r){
		if(dir == 0){
			for(int i=l; i<=r; i++){
				res.push_back(A[t][i]);
	 		}
	 		t++;
	 		dir = 1;
	 	}
	 	if(dir == 1){
	 		for(int i=t; i<=b; i++){
	 			res.push_back(A[i][r]);
	 		}
	 		r--;
	 		dir = 2;
	 	}
	 	if(dir == 2){
	 		for(int i=r; i>=l; i--){
	 			res.push_back(A[b][i]);
	 		}
	 		b--;
	 		dir = 3;
	 	}
	 	if(dir == 3){
	 		for(int i=b; i>=t; i--){
	 			res.push_back(A[i][l]);
	 		}
	 		l++;
	 		dir = 0;
	 	}
	}
	return res;
}

int main(){
	int len;
	cin >> len;
	vector< vector<int> > a(len, vector<int>(len));
	for(int i=0; i<len; i++){
		for(int j=0; j<a[i].size(); j++){
			cin >> a[i][j];
		}
	}

	std::vector<int> res = SpiralOrder(a);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
}