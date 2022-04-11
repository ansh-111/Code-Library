https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],no,min=INT_MAX,diff,i;
        for(i=0;i<n;i++)
        cin>>a[i];
         sort(a,a+n);
        cin>>no;

        for(i=0;i+no-1<n;i++)
        {
            diff=a[i+no-1]-a[i];
            if(min>diff)
            min=diff;
           //cout<<min<<" "<<diff<<"\n";
        }
        cout<<min<<"\n";
    }
	//code
	return 0;
}
