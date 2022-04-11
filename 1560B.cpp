
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
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
ll fact(ll n){return (n==1||n==0)?1:n*fact(n-1);}
ll power(ll x,ll y){ll temp=1;while(y>0){if(y&1)temp=temp*x;y=y>>1;x=x*x;}return temp;}
using namespace std;
int main() {
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(abs(a-b)==1||(abs(a-b)*2)<c||abs(a-b)*2<a||abs(a-b)*2<b)
            cout<<-1<<endl;
        else if(c+abs(a-b)<=2*abs(a-b))
        {
            cout<<c+abs(a-b)<<endl;
        }
        else if(c-abs(a-b)<2*abs(a-b))
            cout<<c-abs(a-b)<<endl;
        else if(c+abs(a-b)==2*abs(a-b)+1)
            cout<<c+abs(a-b)-2*abs(a-b)<<endl;
        else
            cout<<-1<<endl;
    }
	return 0;
}
