#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector< pair<int,int> >
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

int findNumber(vi &v){
	int count = 0;
	int sum = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i]>0){
			count++;
			sum+=v[i];
		}
	}
	if(count == 0){
		return 1;
	}
	int sum_n = ((count+1)*(count+2))/2;
	int missing = sum_n-sum;
	if(missing == 0){
		return count+1;
	}
	return missing;
}

int main(){
	int len;
	cin >> len;
	vector<int> v(len);
	for(int i=0; i<len; i++){
		cin >> v[i];
	}
	int x = findNumber(v);
	cout << x << "\n";
}