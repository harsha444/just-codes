#include<bits/stdc++.h>

using namespace std;

std::vector<int> SpiralOrder(std::vector< std::vector<int>> &arr){
	vector<int> res;
	int row_size = arr.size();
	int col_size = arr[0].size();
	int t=0,b=row_size-1,l=0,r=col_size-1;
	int dir = 1;
	while(t<b && l<r){
		if(dir == 1){
			for(int i=l; i<=r; i++){
				res.push_back(arr[t][i]);
			}
			t++;
			dir = 2;
		}
		if(dir == 2){
			for(int i=t; i<=b; i++) {
				res.push_back(arr[i][r]);
			}
			r--;
			dir = 3;
		}
		if(dir == 3){
			for(int i=r; i>=l; i--){
				res.push_back(arr[b][i]);
			}
			b--;
			dir = 4;
		}
		if(dir == 4){
			for(int i=b;i>=t; i--){
				res.push_back(arr[i][l]);
			}
			l++;
			dir=1;
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	std::vector< std::vector<int> > a(n, std::vector<int>(n));
	for(int i=0; i< n; i++){
		for(int j=0; j< a[i].size(); j++){
			cin >> a[i][j];
		}
	}
	std::vector<int> res = SpiralOrder(a);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
}