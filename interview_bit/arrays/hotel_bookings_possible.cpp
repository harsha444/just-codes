#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool findPossibility(vector<int> &a, vector<int> &d, int k){
    int count = 0;
    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    int plat=1, i=1, j=0;
    while(i<a.size() && j<d.size()){
        if(a[i]<d[j]){
            plat++;
            if(plat > k){
                return false;
            }
            i++;
        }
        else{
            plat--;
            j++;
        }
    }
    return true;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> d(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> d[i];
	}
	int k;
	cin >> k;
	cout << findPossibility(a, d, k) << "\n";
	return 0;
}