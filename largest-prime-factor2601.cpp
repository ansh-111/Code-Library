
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
public:
    long long int largestPrimeFactor(int N){
        long long int max=1,i;
        while(N%2==0)
        {
            max=2;
            N/=2;
        }
        for(i=3;i<=sqrt(N);i+=2)
        {
            while(N%i==0)
            {
            max=i;
            N/=i;
            }

        }
        if(N>2)
        max=N;
        // code here
        return max;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
