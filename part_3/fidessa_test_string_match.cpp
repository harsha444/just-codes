#include <bits/stdc++.h>

using namespace std;

int findMatchingPair(string input){
	stack<int> s;
	transform(input.begin(), input.end(), input.begin(), ::tolower);
	s.push(input[0]);
	int res=0;
	for(int i=1; i<input.size(); i++){
		if(!s.empty()){
			char top = s.top();
			char val_now = input[i];
			if(top==val_now){
				res = i;
				s.pop();
			}
			else{
				s.push(input[i]);
			}
		}
		else{
			s.push(input[i]);
		}
	}
	return res;
}

int main(){
	string s;
	cin >> s;
	int res = findMatchingPair(s);
	cout << res << "\n";
	return 0;
}