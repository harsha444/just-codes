#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lenMaxSubarray(vector<int> A){
	int start=0, end=0, s=0, max_here = 0, max_total = INT_MIN;
	for(int i=0; i<A.size(); i++){
		max_here = max_here + A[i];
		if(max_total < max_here){
			max_total = max_here;
			end = i;
			start = s;
		}
		if(max_here < 0){
			max_here = 0;
			s = i+1;
		}
	}
	cout << "start: " << start << " end: " << end << "\n";
	return max_total;
}

int main(){
	int len;
	cin >> len;
	vector<int> a(len);
	for(int i=0; i<a.size(); i++){
		cin >> a[i];
	}
	int len_of_max_subarray = lenMaxSubarray(a);
	cout << len_of_max_subarray << "\n";
}