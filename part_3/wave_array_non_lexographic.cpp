#include<bits/stdc++.h>

using namespace std;

vector<int> waveArray(vector<int> &v){
	
}

int main(){
	int n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	vector<int> res = waveArray(v);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
	return 0;
}