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

int toggleBits(int n, int l, int r){
	int mask = (1<<r)-1 ^ ((1<<(l-1))-1);
	return n^mask;
}

int main(){
	int n;
	cin >> n;
	cout << "Enter range l, r: ";
	int l, r;
	cin >> l;
	cin >> r;
	cout << toggleBits(n, l, r) << "\n";
	return 0;
}