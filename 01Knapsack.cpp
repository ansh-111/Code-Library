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
void knap(int W,int wt[],int val[],int n)
{
    vector<vector<int>> K(n+1,vector<int>(W+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
                K[i][j]=0;
            else if(wt[i-1]<=j)
            {
                K[i][j]=max(K[i-1][j],(val[i-1]+K[i-1][j-wt[i-1]]));
            }
            else
                K[i][j]=K[i-1][j];
        }
    }
    int temp=K[n][W],j=W;
    cout<<temp<<endl;
    for(int i=n;i>0&&temp>0;i--)
    {
        if(K[i-1][j]==temp)
            continue;
        else
        {
            cout<<wt[i-1]<<" ";
            temp-=val[i-1];
            j-=wt[i-1];

        }
    }
}

int main() {
    fastio;
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

     knap(W, wt, val, n);
    return 0;
}
