#include <bits/stdc++.h>

using namespace std;

vector<int> findPrimes(int n){
	vector<int> v(n+1,1);
	v[0] = 0;
	v[1] = 0;
	int sq = sqrt(n);
	for(int i=2; i<=sq; i++){
		if (v[i] == 1){
			for(int k=i*i; k<=n; k+=i){
				v[k] = 0;
			}
		}
	}

	for(int i=0; i<v.size(); i++){
		if(v[i]==1){
			cout << i << " ";
		}
	}
	return;
}

void findNumbers(vector<int> r, int n){
	int i=1;
	int j=r.size()-1;

}

int main(){
	int n;
	cin >> n;
	vector<int> res = findPrimes(n);
	findNumbers(res, n);
	return 0;
}