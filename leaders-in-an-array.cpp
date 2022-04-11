https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




vector<int> leaders(int a[], int n){
    long long max=-1,i;
    vector<int> v;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>=max)
        {
        max=a[i];
        v.push_back(max);
        }
    }
    reverse(v.begin(),v.end());
    return v;
    // code here
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array

        int a[n];

        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }

        //calling leaders() function
        vector<int> v = leaders(a, n);

        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }

        cout << endl;

   }
}
  // } Driver Code Ends
