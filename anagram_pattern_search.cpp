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

int check_common(vi &a, vi &b){

	for(int i=0; i<a.size(); i++){
		// cout << i <<":" << a[i] << "-" << b[i]<<",";
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

void anagramSearch(string pattern, string text){
	vi final_res;
	int text_len = text.size();
	int pat_len = pattern.size();
	if(text_len < pat_len){
		cout << "Wrong input!" << "\n";
		return;
	}
	vi tA(256,0);
	vi pA(256,0);
	// vi test;
	// test.PB('a');
	for(int i=0; i<pat_len; i++){
		pA[pattern[i]]+=1;
		tA[text[i]]+=1;
	}

	if(check_common(pA, tA)){
		final_res.PB(0);
	}

	for(int i=1; i<=text_len-pat_len; i++){
		tA[text[i-1]]-=1;
		tA[text[i+pat_len-1]]+=1;
		if(check_common(pA, tA) == 1){
			final_res.PB(i);
		}
	}
	for(int i=0; i<final_res.size(); i++){
		cout << final_res[i] << " ";
	}
	if(final_res.size() == 0){
		cout << "No match found!!" << "\n";
	}
}

int main(){
	string pattern;
	string text;
	cin >> text;
	cin >> pattern;
	anagramSearch(pattern, text);
	return 0;
}