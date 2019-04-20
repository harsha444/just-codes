#include <bits/stdc++.h>

using namespace std;

vector<int> maxSubArray(vector<int> v){
	int start = 0, end=0, s=0;
	int max_till_here = 0;
	int total_max = 0;
	for (int i=0; i<v.size(); i++){
		int max_till_here = max_till_here + v[i];
		if(max_till_here > total_max) {
			total_max = max_till_here;
			end = i;
			start = s;
		}
		if(max_till_here < 0) {
			max_till_here = 0;
			s = i+1;
		}
	}
}

int main(){
	int n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	std::vector<int> res = maxSubArray(v);
}