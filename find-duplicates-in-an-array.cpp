https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    vector<int> v(n,0);
    vector<int>v1;
     for(int i=0;i<n;i++)
        v[a[i]]++;
        for(int i=0;i<n;i++)
        {
           // cout<<v[i];
            if(v[i]>1)
            v1.push_back(i);
        }
        if(v1.empty())
        {
            v1.push_back(-1);
            return v1;
        }
        else
        return v1;
    // code here
}
