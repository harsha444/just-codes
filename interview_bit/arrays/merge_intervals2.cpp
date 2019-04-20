#include <bits/stdc++.h>

using namespace std;

struct Interval{
	int start;
	int end;
};

bool sortByStart(Interval i1, Interval i2){
	return i1.start<i2.start;
}

std::vector<Interval> merge(std::vector<Interval> &A){
	sort(A.start(), A.end(), sortByStart);
	stack<Interval> s;
	s.push(A[0]);
	for(int i=1; i<A.size(); i++){
		Interval top = s.top();
		if(A[i].start > top.end){
			s.push(A[i]);
		}
		else{
			
		}
	}
}

int main(){
	int n;
	std::vector<Interval> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].start;
		cin >> v[i].end;
	}

	std::vector<Interval> res = merge(v);
}