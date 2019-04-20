#include<iostream>
#include<bits/stdc++.h>

using namespace std;

std::vector<int> kthRow(int n){
	n = n+1;
	vector< vector<int> > a(n);
	if(n == 1){
		a[0].push_back(1);
		return a[0];
	}
	if(n == 2){
		a[0].push_back(1);
		a[1].push_back(1);
		a[1].push_back(1);
		return a[1];
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
	return a[n-1];
	
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> v;
	v = kthRow(n);
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << "\n";
	return 0;
}