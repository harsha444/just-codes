#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
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

int numberOfBST(int n){
	if(n<=1){
		return 1;
	}
	else{
		int sum=0;
		int left,right,root;
		for(int root=1; root<=n; root++){
			left = numberOfBST(root-1);
			right = numberOfBST(n-root);
			sum+=left*right;
		}
		return sum;
	}
}

int main(){
	int n;
	cin >> n;
	cout << "Result: " << numberOfBST(n) << '\n';
	return 0;
}