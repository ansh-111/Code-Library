https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1
 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    { long long count=0;
        for(long long i=5;i<=N;i*=5)
        {
            count+=N/i;
        }
        return count;
        // Write Your Code here
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
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends
