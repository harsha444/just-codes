#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define mp make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

int findPivot(vi &arr, int low, int high){
	if(low > high){
		return -1;
	}
	
	if(low == high){
		return low;
	}

	if(low<high){
		int mid = (high+low)/2;
		if(arr[mid] > arr[mid+1]){
			return mid;
		}
		else if(arr[mid-1] > arr[mid]){
			return mid-1;
		}
		else{
			if(arr[low] < arr[mid]){
				return findPivot(arr, mid+1, high);
			}
			else{
				return findPivot(arr, low, mid-1);
			}
		}
	}

}

int findNumber(vi &arr, int low, int high, int key){
	if (high < low)
       return -1;
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid])
       return mid;
   if (key > arr[mid])
       return findNumber(arr, (mid + 1), high, key);
   return findNumber(arr, low, (mid -1), key);
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int pivot = findPivot(arr, 0, n-1);
    cout << "Pivot is: " << pivot << '\n';
    cout << "Enter number you want to find: ";
    int val;
    cin >> val;
    int res;
    if(pivot == -1){
    	res = findNumber(arr, 0, n-1, val);
    }
    else{
    	if(val == arr[pivot]){
    		res = pivot;
    	}
    	else if(arr[0] <= val){
    		res = findNumber(arr, 0, pivot-1, val);
    	}
    	else{
    		res = findNumber(arr, pivot+1, n-1, val);
    	}
    }

    if(res != -1){
    	cout << "Found at: " << res << '\n';
    }
    return 0;
}