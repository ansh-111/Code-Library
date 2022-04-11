https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    unordered_map<int, int> m;
    for(int i=0;i<size;i++)
        m[a[i]]++;
    for(auto j:m)
    {
        if(j.second>(size/2))
        return j.first;
    }
    return -1;
    // your code here

}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
