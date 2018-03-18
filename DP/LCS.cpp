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

void LCS(string s1, string s2){
	int n1 = s1.size();
	int n2 = s2.size();
	vvi arr(n1+1, vi(n2+1));
	for(int i=0; i<arr.size(); i++){
		for(int j=0; j<arr[i].size(); j++){
			if(i==0 || j==0){
				arr[i][j] = 0;
			}
			else if(s1[i-1] == s2[j-1]){
				arr[i][j] = arr[i-1][j-1] + 1;
			}
			else{
				arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
			}
		}
	}

	for(int i=0; i<arr.size(); i++){
		for(int j=0; j<arr[i].size(); j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	LCS(s1, s2);
	return 0;
}