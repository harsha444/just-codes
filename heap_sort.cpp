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

void heapify(vi &arr, int n, int i){
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;
	if(l<n && arr[l]>arr[largest]){
		largest = l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest = r;
	}
	if(i!=largest){
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(vi &arr){
	int n = arr.size();
	for(int i=n/2-1; i>=0; i--){
		heapify(arr, n, i);
	}
	for(int i=n-1; i>=0; i--){
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	heapSort(arr);
	for(int i=0; i<arr.size(); i++){
		cout << arr[i] << ' ';
	}
	return 0;
}