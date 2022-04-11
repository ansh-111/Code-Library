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
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m=0,f=0;
    vector <ll> v;
    cin>>n;
    while(n--)
    {
      cin>>m;
        v.pb(m);
    }
        sort(v.begin(),v.end(),greater<ll>());
        if(v[(v.size()-1)]%2==0)
            f=1;
        else if(v[(v.size()-1)]%2!=0)
        {
            for(ll i=v.size()-1;i>-1;i--)
            {
                if(v[i]%2==0)
                {
                   v.pb(v[i]);
                   v.erase(v.begin()+i);
                   f=1;
                   break;
                }

            }

        }
        if(f==1)
        {
        for(ll j=0;j<v.size();j++)
            cout<<v[j];
        }
        else
            cout<<"-1";

	return 0;
}

