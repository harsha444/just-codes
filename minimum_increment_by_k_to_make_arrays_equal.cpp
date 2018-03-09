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

int findResult(vi &arr, int k){
	int max = INT_MIN;
	int res = 0;
	for(auto i:arr){
		if(i>max){
			max = i;
		}
	}

	for(int i=0; i<arr.size(); i++){
		if((max-arr[i])%k != 0){
			return -1;
		}
		else if(arr[i] != max){
			res = res + ((max-arr[i])/k);
			// cout << res << '\n';
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
	cout << "Enter k: ";
	int k;
	cin >> k;
	cout << findResult(arr, k) << '\n';
	return 0;
}