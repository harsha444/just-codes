#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkByVal(string s1, string s2){
	string ab = s1.append(s2);
	string ba = s2.append(s1);
	return ab.compare(ba)>0?1:0;
}

string largestNumber(std::vector<int> A){
	vector<string> s;
	for(int i=0; i<A.size(); i++){
		s.push_back(to_string(A[i]));
	}
	sort(s.begin(), s.end(), checkByVal);
	string res = "";
	for(int i=0; i<s.size(); i++){
		// cout << s[i] << " ";
		res+=s[i];
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	cout << largestNumber(A) << "\n";
	return 0;
}