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
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

vi flip(string A){
	int n = A.length();
	vector<int> arr(n);
	int count = 0;
	for(int i=0; i<A.size(); i++){
		if(A[i] == '1'){
			arr[i]=-1;
			count++;
		}
		else{
			arr[i]=1;
		}
	}
	if(count == A.length()){
		return std::vector<int>();
	}
	int start = 0, end = 0, s = 0, max_here = 0, max_total = INT_MIN;
	for(int i=0; i<arr.size(); i++){
		int max_here = max_here + arr[i];
		if(max_total < max_here){
			max_total = max_here;
			end = i;
			start = s;
		}
		if(max_here < 0){
			max_here = 0;
			s = i+1;
		}
	}
	std::vector<int> res(2);
	res[0] = start+1;
	res[1] = end+1;
	return res;
}

int main(){
	string A;
    cin >> A;
    vi res = flip(A);
    loop(i,0,res.size()){
        cout << res[i]+1 << ' ';
    }
    return 0;
}