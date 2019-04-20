#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > antiDiagonals(vector< vector<int> > &A){
	int sz = (A.size()*2)-1;
	vector< vector<int> > res (sz);
	for(int i=0; i<A.size(); i++){
		for(int j=0; j<A[i].size(); j++){
			int temp = i+j;
			res[temp].push_back(A[i][j]);
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < a[i].size(); ++j)
		{
			cin >> a[i][j];
		}
	}

	vector< vector<int> > res;
	res = antiDiagonals(a);
	for (int i = 0; i < res.size(); ++i)
	{
		for (int j = 0; j < res[i].size(); ++j)
		{
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}