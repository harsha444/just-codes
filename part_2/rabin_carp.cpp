#include <bits/stdc++.h>

using namespace std;

#define d 256

void search(char pat[], char txt[], int q){
	int M = pat.size(); // M=>pattern length => GEEK-4
	int N = txt.size(); // N=>text length => GEEKS FOR GEEKS-15
	int i, j;
	int p = 0; //hash value for pattern
	int t = 0; //hash value for text
	int h = 1;
}

int main(){
	char txt[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	int q = 101; //Random Prime number
	search(pat, txt, q);
	return 0;
}