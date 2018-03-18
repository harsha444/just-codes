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

void nextlargestNumber(string &s){
	int n = s.size();
	int break_pt = -1;
	for(int i=n-1; i>0; i--){
		if(s[i-1]<s[i]){
			break_pt = i-1;
			break;
		}
	}
	if(break_pt == -1){
		cout << "Not possible" << "\n";
		return;
	}
	if(break_pt == n-2){
		swap(s[n-1],s[n-2]);
		cout << s << "\n";
		return;
	}
	char min_r = s[n-1];
	int min_r_in = n-1;
	for(int i=n-2; i>break_pt; i--){
		if(s[i]>s[break_pt] && s[i]<min_r){
			min_r = s[i];
			min_r_in = i;
		}
	}
	// cout << "min_r: " << min_r << "\n";
	// cout << "min_r_index: " << min_r_in << "\n";
	swap(s[min_r_in], s[break_pt]);
	// string test = "4321";
	// sort(test.begin()+1,test.end());
	// cout << "test: " << test << "\n";
	sort(s.begin()+break_pt+1, s.end());
	cout << "result: " << s << "\n";
}

int main(){
	string s;
	cin >> s;
	nextlargestNumber(s);
	return 0;
}