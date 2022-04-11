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
        ll k=0,temp=0;
        cin>>k;
        if(k==1)
            cout<<"1 1"<<endl;
        else if(k==2)
                cout<<"1 2"<<endl;
        else
        {
        fk(i,0,k)
        {
            if(i*i>=k)
            {
                temp=i;
                break;
            }
        }
        if((temp*temp)-k<temp-1)
            cout<<temp<<" "<<((temp*temp)-k+1)<<endl;
        else if((temp*temp)-k>temp-1)
            cout<<k-((temp-1)*(temp-1))<<" "<<temp<<endl;
        else
            cout<<temp<<" "<<temp<<endl;
        }
    }
	return 0;
}

