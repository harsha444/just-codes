#include<bits/stdc++.h>

using namespace std;

struct Interval{
	int start;
	int end;
};

bool sortByStart(Interval i1, Interval i2){
	return i1.start<i2.start;
}

vector<Interval> merge(vector<Interval> v){
	sortByStart(v.begin(), v.end(), sortByStart);
	stack<Interval> s;
	s.push(v[0]);
	for(i=1; i<v.size(); i++){
		Interval top = s.top();
		int top_start = top.start;
		int top_end = top.end;
		Interval curr = v[i];
		int curr_start = curr.start;
		int curr_end = curr.end;
		if(curr_start>top_end){
			s.push(v[i]);
		} else if(top_end < curr_end){
			s.pop();
			top.end = curr_end;
			s.push(top);
		}
	}
	vector<Interval> res;
	while(!s.empty()){
		res.push_back(s.top());
		s.pop();
	}
	sort(res.begin(), res.end(), sortByStart);
	return res;
}

int main(){
	int n;
	vector<Interval> v(n);
	for(int i=0; i<n; i++) {
		cin >> v[i].start >> v[i].end;
	}
	std::vector<Interval> res = merge(v);
	for(int i=0; i<res.size(); i++){
		cout << res[i].start << " " << res[i].end << '\n';
	}
	return 0;
}