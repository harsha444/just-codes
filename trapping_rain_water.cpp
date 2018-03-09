#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector< pair<int,int> >

// Check optimized code in geeks

int calculateWater(vi &arr){
	int n = arr.size();
	vi left(n);
	vi right(n);
	left[0] = arr[0];
	right[n-1] = arr[n-1];
	for(int i=1; i<arr.size(); i++){
		left[i] = max(left[i-1], arr[i]);
	}
	for(int i=n-1; i>=0; i--){
		right[i] = max(arr[i], right[i+1]);
	}
	int water = 0;
	for(int i=0; i<n; i++){
		water += min(left[i],right[i])-arr[i];
	}
	return water;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cout << "Rain water that can be accumulated is : " << calculateWater(arr) << "\n";
}