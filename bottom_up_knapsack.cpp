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
    static int t[10][10];
    memset(t,-1,sizeof(t));
    if(n==0||W==0)
        return 0;
    if(t[n][W]!=-1)
        return t[n][W];
    if(w[n-1]>W)
        t[n][W]=knap(w,val,W,n-1);
    else
        t[n][W]=max((val[n-1]+knap(w,val,W-w[n-1],n-1)),knap(w,val,W,n-1));

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
