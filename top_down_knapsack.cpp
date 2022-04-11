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
using namespace std;

int knap(int w[],int val[],int W,int n)
{
    int t[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
        if(w[i-1]>j)
        t[i][j]=t[i-1][j];
        else
        t[i][j]=max((val[i-1]+t[i-1][j-w[i-1]]),t[i-1][j]);
        }
    }
        return t[n][W];
}

int main() {

    int w[]={10, 20, 30};
    int val[]={60, 100, 120};
    int W=50;
    int n=3;
    cout<<knap(w,val,W,n);
    return 0;
}
