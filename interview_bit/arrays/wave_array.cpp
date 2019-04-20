#include<iostream>
#include<bits/stdc++.h>

using namespace std;

std::vector<int> waveArray(std::vector<int> &arr){
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i=i+2){
        swap(arr[i], arr[i+1]);
    }
    return arr;
}

int main(){
	int len;
	cin >> len;
	vector<int> a(len);
	for(int i=0; i<a.size(); i++){
		cin >> a[i];
	}
	vector<int> res = waveArray(a);
	for (int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << " ";
	}
	cout << "\n";
	return 0;
}