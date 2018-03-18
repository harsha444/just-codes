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

void knapsack(vvi &arr, vi &wt, vi &val, int W){
	for(int i=0; i<arr.size(); i++){
		for(int j=0; j<arr[i].size(); j++){
			if(i==0 || j==0){
				arr[i][j] = 0;
			}
			else if(wt[i-1] <= j){
				arr[i][j] = max(val[i-1]+arr[i-1][j-wt[i-1]], arr[i-1][j]);
			}
			else{
				arr[i][j] = arr[i-1][j];
			}
		}
	}
	for(int i=0; i<arr.size();i++){
		for(int j=0; j<arr[i].size(); j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int n;
	cin >> n;
	vi wt(n);
	vi val(n);
	for(int i=0; i<n; i++){
		cin >> wt[i];
	}
	for(int i=0; i<n; i++){
		cin >> val[i];
	}
	int W;
	cout << "Enter weight allowed: ";
	cin >> W;
	vvi arr(n+1, vi(W+1));
	knapsack(arr, wt, val, W);
	return 0;
}