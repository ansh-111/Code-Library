#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ee(int a,int b, int* x,int* y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int g=ee(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return g;
}

int main()
{
    int a,b,x,y,g;
    cin>>a>>b;
    g=ee(a,b,&x,&y);
    cout<<g<<" "<<x<<" "<<y<<"\n";
}
