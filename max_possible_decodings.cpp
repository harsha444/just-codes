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

int findMaxDecodings(string digits){
	int n = digits.size();
	vi a(n+1);
	a[0] = 1;
	a[1] = 1;
	for(int i=2; i<=n; i++){
		a[i] = 0;

		if(digits[i-1]>'0'){
			a[i] = a[i-1];
		}
		if(digits[i-2] == '1' || (digits[i-2] == '2' && digits[i-1]<'7')){
			a[i] +=a[i-2];
		}
	}
	return a[n];
}

int main(){
	string x;
	cin >> x;
	cout << findMaxDecodings(x) << "\n";
	return 0;
}