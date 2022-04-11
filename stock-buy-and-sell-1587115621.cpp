
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
        ll n,no,i=0,pos=0,pos2=0,f=0;
        vector<ll>v;
        cin>>n;
        f(i,n)
        {
            cin>>no;
            v.pb(no);
        }
        i=0;

        while(i<n-1)
        {
        while((n-1>i)&&(v[i+1]<=v[i]))
        i++;
        if(i==n-1)
        break;
        f=1;
        pos=i++;
        while((n>i)&&(v[i-1]<=v[i]))
        i++;
        pos2=i-1;
        cout<<"("<<pos<<" "<<pos2<<") ";
        }
        if(f==0)
        cout<<"No Profit";
        cout<<"\n";
    }
	return 0;
}
