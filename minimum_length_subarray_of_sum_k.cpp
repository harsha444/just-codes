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
#define mp make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

void findMinimum(vi &arr, int k){
	int start = -1;
	int end = -1;
	int min_length = INT_MAX;
	for(int i=0; i<arr.size(); i++){
		int curr_sum = 0;
		for(int j=i; j<arr.size() && (j-i+1)<min_length; j++){
			curr_sum+=arr[j];
			if(curr_sum == k){
				start = i;
				end = j;
				min_length = j-i+1;
				break;
			}
		}
	}

	cout << "Start: " << start << '\n';
	cout << "End: " << end << '\n';
	cout << "Length: " << min_length << '\n';
	
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Enter sum: ";
	int k;
	cin >> k;
	findMinimum(arr, k);
	return 0;
}