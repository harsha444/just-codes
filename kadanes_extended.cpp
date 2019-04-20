#include<bits/stdc++.h>

using namespace std;


#define ll long long int
#define vi vector<int>
#define vll vector<ll>
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

// https://www.youtube.com/watch?v=kekmCQXYwQ0

void kadanes(vector<int> &vect){
	int start = 0, end = 0, s = 0;
	int max_total = INT_MIN, max_here = 0;
	for(int i=0; i<vect.size(); i++){
		max_here = max_here + vect[i];
		if(max_total < max_here){
			max_total = max_here;
			start = s;
			end = i;
		}
		if(max_here < 0){
			max_here = 0;
			s = i+1;
		}
	}

	cout << "Max subarray sum is: " << max_total << "\n";
	cout << "Start index: " << start << " " << ",End index: " << end << "\n";
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int len;
		cin >> len;
		vector<int> vect(len);
		for(int i=0; i<len; i++){
			cin >> vect[i];
		}
		kadanes(vect);
	}
	return 0;
}