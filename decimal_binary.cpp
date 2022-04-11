#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <regex>
#include <unordered_map>
#include <vector>
#include <queue>
#include <utility>
#include <list>
#include <string>
#include <iterator>
using namespace std;
string dtob(int n)
{
    string s;
    if(n==0)
        s+='0';
        else
        {
    while(n>0)
    {
        if(n%2==0)
        s+='0';
        else
            s+='1';
        n/=2;
    }
    }
    return s;
}
int main()
{
    string v1;
    int n;
    cin>>n;
    v1=dtob(n);
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.length();i++)
        cout<<v1[i];
}
