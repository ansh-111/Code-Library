#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search (int a[],int l,int r,int no)
{
    long long int mid;
    mid=l+(r-l)/2;
    if(no==a[mid])
        return mid;
    else if(no<a[mid])
        return search(a,l,mid-1,no);
    else
        return search(a,mid+1,r,no);
}
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int t,no,i,res;
    cin>>t;
   long long int a[t];
    for(i=0;i<t;i++)
        cin>>a[i];
        sort(a,a+t);
    cin>>no;
    res=search(a,0,t-1,no);
    cout<<res;
}

