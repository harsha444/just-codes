#include<bits/stdc++.h>

using namespace std;

void max_non_negative_array(vector<int> v){
	long long start=0, end=0, s=0, max_till_here=INT_MIN, total_max=0;
	for(int i=0; i<v.size(); i++){
		if(v[i] >=0 )
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	max_non_negative_array(v);
}