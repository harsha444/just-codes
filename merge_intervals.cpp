#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define mp make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

struct Interval{
	int start;
	int end;
};

bool compareInterval(Interval i1, Interval i2){
	return (i1.start < i2.start);
}

std::vector<Interval> MergeIntervals(vector<Interval> &arr, Interval n){
	// For Testing
	// for(int i=0; i<arr.size(); i++){
	// 	cout << arr[i].start << ' ';
	// 	cout << arr[i].end << '\n';
	// }
	arr.PB(n);
	stack<Interval> s;
	sort(arr.begin(), arr.end(), compareInterval);
	s.push(arr[0]);
	for(int i=1; i<arr.size(); i++){
		Interval top = s.top();
		if(arr[i].start > top.end){
			s.push(arr[i]);
		}
		else if(top.end < arr[i].end){
			s.pop();
			top.end = arr[i].end;
			s.push(top);
		}

	}
	vector<Interval> res;
	while(!s.empty()){
		res.PB(s.top());
		s.pop();
	}
	sort(res.begin(), res.end(), compareInterval);
	return res;
}

int main(){
	int n;
	cin >> n;
	vector<Interval> arr(n);
	for(int i=0; i<arr.size(); i++){
		cin >> arr[i].start;
		cin >> arr[i].end;
	}
	Interval n1;
	cout << "Enter the interval: ";
	cin >> n1.start;
	cin >> n1.end;
	vector<Interval> res = MergeIntervals(arr, n1);
	for(int i=0; i<res.size(); i++){
		cout << res[i].start << ' ';
		cout << res[i].end << '\n';
	}
	return 0;
}