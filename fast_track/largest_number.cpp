#include <bits/stdc++.h>

using namespace std;

bool sortByNumber(string s1, string s2){
	string ab = s1.append(s2);
	string ba = s2.append(s1);
	return ab.compare(ba)>0 ? 1: 0;
}

string largestNumber(vector<int> A){
	vector<string> s;
	int check_zeros = 0;
	for (int i=0; i<A.size(); i++){
		check_zeros++;
		s.push_back(to_string(A[i]));
	}
	if(check_zeros == A.size()){
		return "0";
	}
	sort(s.begin(), s.end(), sortByNumber);
	string res = "";
	for(int i=0; i<s.size(); i++){
		res += s[i];
	}
	return res;
}

int main(){
	int n;
	vector<int> A(n);
	string s = largestNumber(A);
	cout << s << " ";
	return 0;
}