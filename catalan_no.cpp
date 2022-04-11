#include<iostream>
using namespace std;
int cat(int t)
{
    int catlan[t+1],i,j;
    catlan[0]=1;
    catlan[1]=1;
    for(i=2;i<=t;i++)
    {
        catlan[i]=0;
        for(j=1;j<=i;j++)
        catlan[i]+=catlan[j-1]*catlan[i-j];
    }
    return catlan[t];
}
int main()
{
    int t;
    cin>>t;
    cout<<cat(t);
}
