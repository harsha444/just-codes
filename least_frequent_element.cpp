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

int findLeastFrequent(vi &arr){
	unordered_map<int, int> m;
	for(int i=0; i<arr.size(); i++){
		m[arr[i]]++;
	}
	int min_val=arr.size()+1;
	int res = -1;
	for(auto i:m){
		if(min_val >= i.second){
			res = i.first;
			min_val = i.second;
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << findLeastFrequent(arr) << "\n";
	return 0;
}