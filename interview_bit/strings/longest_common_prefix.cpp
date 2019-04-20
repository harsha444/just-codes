#include <bits/stdc++.h>

using namespace std;

void longestCommonPrefix(vector<string> v){

}

int main(){
	int n;
	std::vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	string res = longestCommonPrefix(v);
	cout << res << "\n";
	return 0;
}