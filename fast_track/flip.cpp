#include<bits/stdc++.h>

using namespace std;

vector<int> flip(vector<int> v){
	int start, end, max_till_here, max_total, s=0;
	max_till_here = INT_MIN;
	for(int i=0; i<v.size(); i++){
		int num = (v[i] == 1) ? -1 : 1;
		max_till_here = max_till_here + num;
		if(max_till_here > max_total){
			max_total = max_till_here;
			end = i;
			start = s;
		}

		if(max_till_here < 0){
			s = i+1;
		}
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	vector<int> res = flip(v);
	for(int i=0; i<res.size(); i++){
		cout << v[i];
	}
	return 0;
}