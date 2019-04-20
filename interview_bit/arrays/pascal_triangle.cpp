#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > pascalTriangle(int n){
	vector< vector<int> > a(n);
	if(n == 1){
		a[0].push_back(1);
		return a;
	}
	if(n == 2){
		a[0].push_back(1);
		a[1].push_back(1);
		a[1].push_back(1);
		return a;
	}
	if(n>2){
		a[0].push_back(1);
		a[1].push_back(1);
		a[1].push_back(1);
		for(int i=2; i<n; i++){
			for(int j=0; j<=i; j++){
				if(j == 0 || j == i){
					a[i].push_back(1);
				}
				else{
					a[i].push_back(a[i-1][j-1] + a[i-1][j]);
				}
			}
		}
	}
	return a;

}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::vector< std::vector<int> > res;
	res = pascalTriangle(n);
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}