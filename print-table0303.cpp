https://practice.geeksforgeeks.org/problems/print-table0303/1

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> v;
        int mult=0,i=0,j=1;
       for(i=0;i<10;i++)
       {
           mult=N*j;
           j++;
           v.push_back(mult);
       }
        // Write Your Code here
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
