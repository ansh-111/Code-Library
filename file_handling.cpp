#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <fstream>
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
double round(double var){double value = (int)(var * 100 + .5);return (double)value / 100;}
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,n,s1;
    cin>>s>>n;
    fstream fp("sbd.txt",ios::app);
    if(!fp)
        cout<<"g\n";
    fp<<s<<" "<<n<<"\n";
    fp.close();
    ifstream fp1("sbd.txt");
    while(fp1>>s>>n)
    {
        cout<<s<<" "<<n<<"\n";
    }
   return 0;
}

