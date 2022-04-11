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
    ll n,s=0,t=INT_MIN,z=0,m=0,i=0;
    vector <ll> v;
    cin>>n;
    while(n--)
    {
      cin>>m;
        v.pb(m);
    }
    for(i=0;i<v.size();i++)
    {
        s+=v[i];
        if(s>t)
        {
        t=s;
        if(s>0)
        {
        z=i+1;
        }
        }
    }
    cout<<z;
	return 0;
}

