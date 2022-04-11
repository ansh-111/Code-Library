https://practice.geeksforgeeks.org/problems/set-bits0143/1
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        int count=0;
        while(N)
        {
            count+=N&1;
            N>>=1;
        }
        return count;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends
