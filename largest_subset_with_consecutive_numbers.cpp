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

void largestSubset(vi &a){
	map<int, int> m;
	for(int i=0; i<a.size(); i++){
		m[a[i]]++;
	}
	int max_len = 0;
	int starts_from = -1;
	for(int i=0; i<a.size(); i++){
		if(m.find(a[i]-1) == m.end()){
			int temp = a[i];
			int max_here = 0;
			int starts_here = a[i];
			while(m.find(temp)!=m.end()){
				max_here++;
				temp++;
			}
			if(max_here > max_len){
				max_len = max_here;
				starts_from = a[i];
			}
		}
	}
	cout << starts_from << " " << max_len << "\n";
}

int main(){
	int n;
	cin >> n;
	vi a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	largestSubset(a);
	return 0;
}