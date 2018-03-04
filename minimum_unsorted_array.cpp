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

vi FindIndexes(vi &arr){
	int min_index=INT_MIN;
	int max_index;
	vi res;
	for(int i=0; i<arr.size()-1; i++){
		if(arr[i+1]<arr[i]){
			min_index = i;
			break;
		}
	}
	if(min_index == INT_MIN){
		res.PB(-1);
		return res;
	}
	for(int j=arr.size()-1; j>0; j--){
		if(arr[j-1]>arr[j]){
			max_index = j;
			break;
		}
	}

	int min_s = arr[min_index];
	int max_s = arr[min_index];
	for(int i=min_index+1; i<=max_index; i++){
		if(arr[i] < min_s){
			min_s = arr[i];
		}
		if(arr[i] > max_s){
			max_s = arr[i];
		}
	}

	for(int i=0; i<min_index; i++){
		if(arr[i] > min_s){
			min_index = i;
			break;
		}
	}

	for(int i=arr.size()-1; i>=max_index+1; i--){
		if(arr[i] < max_s){
			max_index = i;
			break;
		}
	}

	vi res(2);
	res.PB(min_index);
	res.PB(max_index);
	return res;
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	vi res = FindIndexes(arr);
	return 0;
}