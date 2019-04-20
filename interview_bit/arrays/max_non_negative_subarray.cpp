#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> findResult(std::vector<int> A){
	long long start = 0, end = 0, len = 0, s=0, max_here = 0, total_max = INT_MIN, check_all_negatives = 0;
	for(int i=0; i<A.size(); i++){
		// 2 cases: a[i]>0 and <0
	 	if(A[i]>=0){
 		// if >0, we do a normal addition to find max_here and max_total
	 		max_here = max_here + A[i];
 		// if total max is < max_here, then we have to change it to total_max and change index values accordingly
	 		if(max_here > total_max){
	 			total_max = max_here;
		 		start = s;
		 		end = i;
		 	}	
		 	if(total_max == max_here){
		 		if((i-s+1) > (end-start+1)){
		 			start = s;
		 			end = i;
		 		}
		 	}
		}
		if(A[i]<0){
	 		check_all_negatives++;
	 		max_here = 0;
	 		s = i+1;
	 	}
	}
	 if(check_all_negatives == A.size()){
	 	return std::vector<int> ();
	 }

	 //cout << "length is: " << len << "\n";
	 //cout << "start: " << start << " end: " << end << "\n"; 
	 std::vector<int> v(10,0);
	 return std::vector<int> (A.begin()+start, A.begin()+end+1);
}

int main(){
	int len;
	cin >>len;
	vector<int> A(len);
	for(int i=0; i<len; i++){
		cin >> A[i];
	}
	vector<int> res = findResult(A);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}	
	return 0;
}