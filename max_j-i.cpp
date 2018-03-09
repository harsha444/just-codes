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

int findMax(vi &arr){
	int n = arr.size();
	vi left(n);
	vi right(n);
	int l_min = arr[0];
	int r_max = arr[n-1];
	for(int i=1; i<n; i++){
		if(arr[i] > arr[i-1]){
			left[i] = arr[i-1];
		}
		else{
			left[i] = arr[i];
		}
	}
	for(int i=n-2; i>=0; i--){
		if(arr[i] < arr[i+1]){
			right[i] = arr[i+1];
		}
		else{
			right[i] = arr[i];
		}
	}

	int i=0;
	int j=0;
	int max_diff = -1;
	while(j < n && i < n){
		if(left[i] < right[j]){
			max_diff = max(max_diff, j-i);
			j++;
		}
		else{
			i++;
		}
	}

	return max_diff;

}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << findMax(arr) << '\n';
}