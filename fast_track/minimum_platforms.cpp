#include<bits/stdc++.h>

using namespace std;

int hotel(vector<int> &arrive, vector<int> &depart){
	sort(arrive.begin(), arrive.end());
	sort(depart.begin(), depart.end());
	int i=1, j=0;
	int plat_req = 1;
	while(i<arrive.size() && j<depart.size()){
		if(arrive[i] < depart[j]){
			plat_req++;
			i++;
		} else {
			plat_req--;
			j++;
		}
	}
	return plat_req;
}

int main(){
	int n;
	vector<int> arrive(n);
	vector<int> depart(n);
	for(int i=0; i<n; i++){
		cin >> arrive[i];
	}
	for(int i=0; i<n; i++){
		cin >> depart[i];
	}
	int res = hotel(arrive, depart);
}