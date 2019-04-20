/* Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1. */

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

void solve(vector<int> &v){
	sort(v.begin(), v.end());
	// unordered_map<int, int> m;
	// // int si = v.size();
	// // m[v[si]-1] = 0;
	// for(int i=0; i<v.size(); i++){
	// 	int temp = v[i];
	// 	for(int j=i+1; j<v.size(); j++){
	// 		if(v[j]>temp){
	// 			m[i]+=1;
	// 		}
	// 	}
	// }

	// for(auto i:m){
	// 	cout << i.F << ' ' << i.S << "\n";
	// 	if(v[i.first] == i.second){
	// 		// cout << v[i.first] << "\n";
	// 	}
	// }
	int si = v.size();
	int check = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i] == si-i-1){
			check = 1;
			cout << v[i] << "\n";
			break;
		}
	}
	if(check == 0){
		cout << -1 << '\n';
	}

}

int main(){
	int len;
	cin >> len;
	vector<int> vect(len);
	for(int i=0; i<len; i++){
		cin >> vect[i];
	}
	solve(vect);
	return 0;
}