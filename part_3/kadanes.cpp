#include<bits/stdc++.h>

void kadanes(vector<int> &v){
  max_till_now = v[0];
  total_max = v[0];
  int s=0,start=0,end=0;
  for(int i=1; i<v.size(); i++){
    max_till_now = max_till_now+v[i];
    if(max_till_now > total_max){
      total_max = max_till_now;
      start = s;
      end=i;
    }
    if(max_till_now < 0){
      s = i+1;
    }
  }
  print(total_max);
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++){
    cin >> c[i];
  }
  kadanes(v);
  return 0;
}
