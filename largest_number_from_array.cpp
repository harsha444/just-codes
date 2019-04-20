#include<bits/stdc++.h>

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

int myCompare(string x, string y){
	string xy = x.append(y);
	string yx = y.append(x);
	return xy.compare(yx)>0?1:0;	
}

void largestNumber(vector<string> &v){
	sort(v.begin(), v.end(), myCompare);
	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int len;
		cin >> len;
		vector<string> v(len);
		for(int i=0; i<len; i++){
			cin >> v[i];
		}
		largestNumber(v);
	}
	return 0;
}