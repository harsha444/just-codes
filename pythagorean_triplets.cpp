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

int isTriplet(vi &arr){
	for(int i=0; i<arr.size(); i++){
		arr[i] = arr[i] * arr[i];
	}
	sort(arr.begin(), arr.end());
	for(int i=arr.size()-1; i>=2; i--){
		int l=0;
		int r = i-1;
		while(l < r){
			if(arr[l] + arr[r] == arr[i]){
				return 1;
			}
			else{
				(arr[l] + arr[r] < arr[i]) ? l++ : r--;
			}
		}
	}
	return 0;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int res = isTriplet(arr);
	res == 1 ? cout << "yes" : cout << "no";
	cout << '\n';
}