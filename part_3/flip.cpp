#include <bits/stdc++.h>

using namespace std;

vector<int> findFlipIndices(String A){
	int n = A.length();
    vector<int> arr(n);
    int count = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i] == '1'){
            arr[i]=-1;
            count++;
        }
        else{
            arr[i]=1;
        }
    }
    if(count == A.length()){
        return std::vector<int>();
    }
    int start = 0, end = 0, s = 0, max_here = 0, max_total = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        int max_here = max_here + arr[i];
        if(max_total < max_here){
            max_total = max_here;
            end = i;
            start = s;
        }
        if(max_here < 0){
            max_here = 0;
            s = i+1;
        }
    }
    std::vector<int> res(2);
    res[0] = start+1;
    res[1] = end+1;
    return res;
}

int main(){
	String n;
	cin >> n;
	res = findFlipIndices(n);
	for(int i=0; i<res.size(); i++){
		cout << res[i] << " ";
	}
	return 0;
}