https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long m=INT_MIN,temp=0;
        for(int i=0;i<n;i++)
        {
             temp+=arr[i];
            if(temp>m)
            m=temp;

            if(temp<0)
            temp=0;
        }
        // Your code here
        return m;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
