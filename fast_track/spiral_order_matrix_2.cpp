#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > generateMatrix(int n){
	vector< vector<int> > v(n, vector<int>(n));
	int t=0, b=n-1, r=n-1,l=0;
	int dir = 0;
	int z=0;
	while(z<=(n*n)) {
		if(dir == 0){
			for(int i=l; i<r; i++){
				v[t][i] = z;
				z++;
				t++;
				dir = 1;
			}
		}
		else if(dir == 1){
			for(int i=t; i<b; i++){
				v[i][r] = z;
				z++;
				r--;
				dir=2;
			}
		}
		else if(dir == 2){}
	}
}

int main(){
	int n;
	generateMatrix(n);
}