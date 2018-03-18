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

int countBinary(vi &a, vi &b){
	int n = a.size();
	a[0]=1;
	b[0]=1;
	for(int i=1; i<a.size(); i++){
		a[i] = a[i-1] + b[i-1];
		b[i] = a[i-1];
	}
	return (a[n-1]+b[n-1]);
}

int main(){
	int n;
	cin >> n;
	vi a(n), b(n);
	cout << countBinary(a, b) << "\n";
}