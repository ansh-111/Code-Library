#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<vector>
#include <queue>
#include <utility>
#include<cstring>
#include<cmath>
#include <list>
#include <string>
#include<set>
#include <iterator>
#define ll long long int
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;
int f(int x,int y)
{
    return x>y;
}
void vec()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    v.pb(i);
    v.pb(4);
    sort(v.begin(),v.end());
    for(auto i:v)
        cout<<i;
        cout<<"\n";
    bool t=binary_search(v.begin(),v.end(),2);
    if(t)
        cout<<"found";
    auto it=upper_bound(v.begin(),v.end(),4);
    auto it2=lower_bound(v.begin(),v.end(),4);
    cout<<it-it2<<"\n";
    sort(v.begin(),v.end(),f);
    for(auto j:v)
        cout<<j;
    cout<<"\n";

}
void s()
{
    set<int> s;
    for(int i=0;i<5;i++)
        s.insert(i);
        s.insert(-1);
        s.insert(5);
        s.erase(3);
    for(auto j:s)
        cout<<j;
    cout<<"\n";
    auto it=s.find(5);
    cout<<*it<<"\n";
    if(it==s.end())
        cout<<" not found\n";
    else
        cout<<"found\n";
    auto it1=s.upper_bound(5),it2=s.lower_bound(4);
    cout<<*it1<<*it2;
    if(it1==s.end())
        cout<<"error!!\n";
}
void mapd()
{
    unordered_map<char,int>m;
    string s="himanshu kumar purbey";
    for(auto i:s)
        m[i]++;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<"\n";
        cout<<"\n"<<m['h'];

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vec();
    //s();
   mapd();
}
