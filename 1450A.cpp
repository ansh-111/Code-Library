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
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,j=0;
        cin>>n;
        vector<char> v;
        char c;
       while(n--)
       {
           cin>>c;
           if(c=='b')
           {
               c='A';
           j++;
           }
           v.pb(c);
       }
       while(j--)
       cout<<"b";
       for(i=0;i<v.size();i++)
       {
           if(v[i]!='A')
           cout<<v[i];
       }
        cout<<"\n";
    }
	return 0;
}

