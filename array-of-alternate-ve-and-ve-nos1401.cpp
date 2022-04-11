https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1

#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	   vector<int >v,v1;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>=0)
	       v.push_back(arr[i]);
	       else
	       v1.push_back(arr[i]);
	   }
	   int i=0,j=0;
	   while(n>i)
	   {
	       if(v.size()>j)
	       {
	       arr[i]=v[j];
	       i++;
	       }
	       if(v1.size()>j)
	       {
	       arr[i]=v1[j];
	       i++;
	       }
	       j++;
	   }

	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
