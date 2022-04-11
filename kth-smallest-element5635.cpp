https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],k;
        for(ll i=0;i<n;i++)
        cin>>a[i];
        cin>>k;
        sort(a,a+n);
        cout<<a[k-1]<<"\n";
    }
	//code
	return 0;
}
