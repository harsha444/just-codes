#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > spiralOrder(int n){
	int t=0,l=0,b=n-1,r=n-1, dir=0;
	vector< vector<int> > v(n, std::vector<int>(n));
	int i=1;
	while(i<=(n*n)){
		if(dir == 0){
			for(int j=l; j<=r; j++){
				v[t][j] = i;
				i++;
			}
			t++;
			dir = 1;
		}
		else if(dir == 1){
			for(int j=t; j<=b; j++){
				v[j][r] = i;
				i++;
			}
			r--;
			dir = 2;

		}
		else if(dir == 2){
			for(int j=r; j>=l; j--){
				v[b][j] = i;
				i++;
			}
			b--;
			dir = 3;
		}
		else if(dir == 3){
			for(int j=b; j>=t; j--){
				v[j][l] = i;
				i++;
			}
			l++;
			dir = 0;
		}
	}

	return v;
}

int main(){
	int n;
	cin >> n;
	vector< vector<int> > res = spiralOrder(n);
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
}