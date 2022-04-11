https://practice.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1

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
    int t;
    cin>>t;
    while(t--)
    {
        ll n=0,i=0,j=0,s=0;
        cin>>n;
        vector<int> v(n+1,1);
        for(i=2;i<=n;i++)
        {
            if(v[i]==1)
            {
                for(j=i*i;j<=n;j+=i)
                v[j]=0;
            }
        }
        for(i=2;i<=n;i++)
        {
            if(v[i]==1)
            s+=i;
        }
        cout<<s<<"\n";
    }
	return 0;
}
