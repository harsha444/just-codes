#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Result(std::vector<int> x, std::vector<int> y){
	int res = 0;
	for(int i=1; i<x.size(); i++){
		res = res + (abs(x[i]-x[i-1]) < abs(y[i]-y[i-1]) ? abs(y[i]-y[i-1]) : abs(x[i]-x[i-1]));
	}
	return res;
}

int main(){
	int len_x,len_y;
	cin >> len_x;
	cin >> len_y;
	vector<int> x(len_x);
	std::vector<int> y(len_y);
	for(int i=0; i<len_x; i++){
		cin >> x[i];
	}
	for(int i=0; i<len_y; i++){
		cin >> y[i];
	}
	int result = Result(x, y);
	cout << result << "\n";
	return 0;
}