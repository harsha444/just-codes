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

void printPascal(vvi &arr, int n){
	if(n==1){
		arr[0].PB(1);
		return arr;
	}
	if(n==2){
		arr[0].PB(1);
		arr[1].PB(1);
		arr[1].PB(1);
		return arr;
	}

	arr[0].PB(1);
	arr[1].PB(1);
	arr[1].PB(1);

	for(int i=2; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j == 0 || j == i){
				arr[i].PB(1);
			}
			else{
				int temp = arr[i-1][j-1]+arr[i-1][j];
				arr[i].PB(temp);
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<arr[i].size(); j++){
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}

int main(){
	int n;
	cin >> n;
	vvi arr(n);
	printPascal(arr,n);
	return 0;
}