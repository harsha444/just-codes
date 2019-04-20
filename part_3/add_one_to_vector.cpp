#include <bits/stdc++.h>

using namespace std;

vector<int> add_one(vector<int> &v){
	int carry = 0;
	for(int i=v.size()-1; i>=0; i--){
		if(i==v.size()-1){
			v[i]+=1;
		}else {
			v[i]+=carry;
			if(v[i]>=10){
				v[i] = 0;
				carry = 1;
			} else{
				carry = 0;
			}
		}
		if(i==0){
			if(carry == 1){
				v.insert(v.begin(), 1);
			}
		}
	}
	int trailing_zeros = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i]==0){
			trailing_zeros+=1;
		}else {
			break;
		}
	}
	return vector<int>(v.begin()+trailing_zeros,v.end());
}

int main(){
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++) {
		cin >> v[i];
	}
	vector<int> res = add_one(v);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
}