#include <bits/stdc++.h>

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
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

bool findNumbers(vi &arr, int val){
	unordered_set<int> m;
	for(int i=0; i<arr.size(); i++){
		if(m.find(val-arr[i]) != m.end()){
			return true;
		}
		m.insert(arr[i]);
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int val;
	cout << "Enter sum: ";
	cin >> val;
	cout << findNumbers(arr, val) << '\n';
	return 0;
}