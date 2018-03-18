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

int maxEncodings(int n){
	vi res(n);
	if(n<=6){
		return n;
	}
	for(int i=1; i<=6; i++){
		res[i-1] = i;
	}
	for(int i=7; i<=n; i++){
		res[i-1] = 0;
		for(int b=i-3; b>=1; b--){
			int curr = (i-b-1)*res[b-1];
			if(curr > res[i-1]){
				res[i-1] = curr;
			}
		}
	}

	return res[n-1];
}

int main(){
	int n;
	cin >> n;
	cout << "Possible encodings: " << maxEncodings(n) << "\n";
	return 0;
}