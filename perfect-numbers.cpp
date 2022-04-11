https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long s=0,i;
        for (i = 1; i <=sqrt(N); i++)
        {
            if (N % i == 0)
            {
                if(N/i==i)
                s+=i;

                else
                {
                s+=i;
                s+=N/i;
                }

            }
         }
        if((s-N)==N)
        return 1;
        else
        return 0;
        // code here
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
