#include<bits/stdc++.h>

using namespace std;

void findTranspose(vector< vector<int> > &v){
	for(int i=0; i<v.size(); i++){
		for(int j=i; j<v[i].size(); j++){
			swap(v[i][j], v[j][i]);
		}
	}
	return v;
} 

void swapColumns(vector< vector<int> > &v){
	for(int i=0; i<v[0].size(); i++){
		for(int j=i;)
	}
}

void rotateMatrix(vector< vector<int> > &v){

	findTranspose(v);
	swapColumns(v);

	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	std::vector< vector<int> > v(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> v[i][j];
		}
	}
	rotateMatrix(v);
}