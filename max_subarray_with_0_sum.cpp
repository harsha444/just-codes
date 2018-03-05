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


int findLength(vi &arr){
	unordered_map<int, int> m;
	int len = 0;
	int end_index = -1;
	int sum = 0;
	m[0] = -1;
	for(int i=0; i<arr.size(); i++){
		sum+=arr[i];
		if(m.find(sum) != m.end()){
			if(i-m[sum] > len){
				end_index = i;
				len = i-m[sum];
			}
		}
		else{
			m[sum] = i;
		}
	}

	cout << "end_index: " << end_index << '\n';
	return len;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int res = findLength(arr);
	cout << "Length of max subarray with 0 sum is: " << res << '\n';
	return 0;
}