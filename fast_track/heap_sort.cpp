#include<bits/stdc++.h>

using namespace std;


void printArray(vector<int> &v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
}

void heapify(vector<int> &v, int i){
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;

	if(left < v.size() && v[left] > v[i]){
		largest = left;
	}
	if(right < v.size() && v[right] > v[i]){
		largest = right;
	}
	if(largest != i){
		swap(v[i], v[largest]);
		heapify(v, largest);
	}
}

void heapSort(vector<int> &v){
	int sz = v.size();
	// Create a max heap
	for(int i=sz/2-1; i>=0; i--){
		heapify(v, i);
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	heapSort(v);
	printArray(v);
}