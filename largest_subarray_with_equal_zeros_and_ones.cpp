/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*You are required to complete this method*/
int maxLen(int arr[], int n)
{
//Your code here
    unordered_map<int,int> umap;
    int k=0,max=0;
    umap[0]=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            k++;
        }
        else if(arr[i]==0){
            k--;
        }
        // if it is not able to find k
        if(umap.find(k)==umap.end()){
            umap[k]=i;
        }
        else{
            if(i-umap[k]>max){
                max=i-umap[k];
            }
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    std::cout << maxLen(arr, n) << std::endl;
    return 0;
}