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

int MaxSlidingWindow(vi &arr, int k){
	int max_sum=0;
	int sum_here=0;
	for(int i=0; i<k; i++){
		max_sum+=arr[i];
	}
	sum_here = max_sum;
	for(int i=1; i<=arr.size()-k; i++){
		sum_here = sum_here+arr[k+i-1]-arr[i-1];
		if(sum_here>max_sum){
			max_sum = sum_here;
		}
	}
	return max_sum;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Sliding Window Size: ";
	int sz;
	cin >> sz;
	cout << MaxSlidingWindow(arr, sz) << '\n';
	return 0;
}