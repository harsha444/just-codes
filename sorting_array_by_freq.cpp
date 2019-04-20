// Good question which uses copy and hashing

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

unordered_map<int, int> m2;

bool sortByVal(const pair<int, int> &a, const pair<int, int> &b){
	if(a.S == b.S){
		return (m2[a.F] < m2[b.F]);
	}
	return a.S > b.S;
}

void sortByFreq(vector<int> &v){
	unordered_map<int, int> m;
	vector< pair<int, int> > vect;
	for(int i=0; i<v.size(); i++){
		m[v[i]]+=1;
		if(m2[v[i]] == 0){
			m2[v[i]] = i+1;
		}
	}
	// Copy value from map to vector pair
	copy(m.begin(), m.end(), back_inserter(vect));
	// Sort value by freqency. Write comparator for that
	sort(vect.begin(), vect.end(), sortByVal);

	for(int i=0; i<vect.size(); i++){
		for(int j=0; j<vect[i].S; j++){
			cout << vect[i].F << " ";
		}
	}
	cout << "\n";
	
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
		sortByFreq(v);
	}
	return 0;

}