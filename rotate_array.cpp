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

void reverseArray(vi &arr, int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		// or swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void Rotate(vi &arr, int d){
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, arr.size()-1);
	reverseArray(arr, 0, arr.size()-1);
}

int main(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int d;
	cout << "Rotate by? ";
	cin >> d;
	Rotate(arr, d);
	for(int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}