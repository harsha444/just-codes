#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct Interval{
	int start;
	int end;
};

bool sortByStart(Interval i1, Interval i2){
	return i1.start < i2.start;
}

vector<Interval> mergeIntervals(vector<Interval> &intervals){	
	sort(intervals.begin(), intervals.end(), sortByStart);

	stack<Interval> s;
	s.push(intervals[0]);
	for(int i=1; i<intervals.size(); i++){
		Interval top = s.top();
		if(intervals[i].start > top.end){
			s.push(intervals[i]);
		}
		else if(top.end < intervals[i].end){
			s.pop();
			top.end = intervals[i].end;
			s.push(top);
		}
	}
	vector<Interval> res;
	while(!s.empty()){
		res.push_back(s.top());
		// cout << s.top().start << " " << s.top().end << "\n";
		s.pop();
	}

	sort(res.begin(), res.end(), sortByStart);
	return res;
}


int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter number of intervals: ";
	cin >> n;
	cout << "Enter intervals: ";
	vector<Interval> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].start;
		cin >> v[i].end;
	}
	vector<Interval> res;
	res = mergeIntervals(v);
	for(int i=0; i<res.size(); i++){
		cout << res[i].start << " " << res[i].end << "\n";
	}
	return 0;
}