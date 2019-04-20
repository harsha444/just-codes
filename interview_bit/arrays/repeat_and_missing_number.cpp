#include<iostream>
#include<bits/stdc++.h>

using namespace std;

std::vector<int> findResult(std::vector<int> &A){
    long long int len = A.size();
    long long int sumOfN = (len * (len+1) ) /2, sumOfNsq = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber1=0, missingNumber2=0;
    
    for(int i=0;i<A.size(); i++){
       sumOfN -= (long long int)A[i];
       sumOfNsq -= (long long int)A[i]*(long long int)A[i];
    }
    
    missingNumber1 = (sumOfN + sumOfNsq/sumOfN)/2;
    missingNumber2= missingNumber1 - sumOfN;
    vector <int> ans;
    ans.push_back(missingNumber2);
    ans.push_back(missingNumber1);
    return ans;
}

int main(){
	int len;
	cin >> len;
	vector<int> a(len);
	for(int i=0; i<a.size(); i++){
		cin >> a[i];
	}
	vector<int> res = findResult(a);
	cout << res[0] << " " << res[1] << "\n";
	return 0;
}