https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1

#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <unordered_map>
#include <vector>
#include <queue>
#include <utility>
#include <list>
#include <string>
#include <iterator>
#define ll long long int
#define mp make_pair
#define pb push_back
#define M 1000000007
#define f(i,n) for(ll i=0;i<n;i++)
#define fk(i,k,n) for(ll i=k+1;i<n;i++)
#define fka(i,k,n) for(ll i=k;i<=n;i++)
#define fks(i,k,n) for(ll i=k;i>=n;i--)
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n=0,k=0,f=0,no=0,s=0;
        cin>>n;
        vector<int> v;
        for(ll i=0;i<n;i++)
        {
        cin>>no;
        v.pb(no);
        }
        cin>>k;
        f(i,n)
       {
           s=k-v[i];
           if(binary_search(v.begin()+(i+1),v.end(),s))
           {
           cout<<v[i]<<" "<<s<<" "<<k<<"\n";
           f=1;
           }

       }
       if(f==0)
       cout<<"-1\n";

    }
	return 0;
}
