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

void nextPermutation(vector<int> &v){
	int siz = v.size();
	int done = 0, le = v[siz-1], pivot;
	for(int i=(siz-1); i>0; i--){
		if(v[i-1] < v[i]){
			pivot = i-1;
			done = 1;
			break;
		}
	}
	int n_g = pivot;
	for(int i=pivot+1; i<v.size(); i++){
		if(v[pivot] < v[i] && v[i] > v[n_g]){
			n_g = i;
		}
	}
	swap(v[n_g], v[pivot]);
	sort(v.begin()+pivot+1, v.end());
	if(done == 0){
		for(auto it = v.rbegin(); it!=v.rend(); ++it){
			cout << *it << " ";
		}
	}
	else{
		for(auto it = v.begin(); it!=v.end(); it++){
			cout << *it << " ";
		}
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int len;
		cin >> len;
		vector<int> v(len);
		for(int i=0; i<len; i++){
			cin >> v[i];
		}
		nextPermutation(v);
	}
	return 0;
}