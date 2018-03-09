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

void generateBinary(int k){
	queue<string> q;
	q.push("1");
	while(k--){
		string s1 = q.front();
		q.pop();
		cout << s1 << " ";
		string s2 = s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
}

int main(){
	int k;
	cout << "Enter how many binary numbers u want to generate: ";
	cin >> k;
	generateBinary(k);
}