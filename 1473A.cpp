#include <iostream>
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n],flag=0;
        f(i,n)
        cin>>a[i];
        sort(a,a+n);
        ll m=a[0]+a[1];
        f(i,n)
        {
            if(a[i]>d&&m>d)
            {
            flag=1;
            break;
            }
        }
        if(flag==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
	return 0;
}
