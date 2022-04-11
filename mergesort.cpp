#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mrg(int a[],int l,int r,int mid)
{
    int n=(r-l)+1;
    int temp[n],i=l,j=mid+1,k=l;
    while(i<=l&&j<=r)
    {
        if(a[j]>=a[i])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {

        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=r)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    for(int x=l;x<=r;x++)
        a[x]=temp[x];
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        mrg(a,l,r,mid);
    }
}
int  main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,(n-1));
    for(int i=0;i<n;i++)
        cout<<a[i];
        return 0;
}
