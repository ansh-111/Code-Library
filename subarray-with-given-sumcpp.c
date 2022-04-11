https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        long long int a[n],res=0,j=1,i;
        for(i=1;i<=n;i++)
        cin>>a[i];
        for(i=1;i<=n;i++)
        {
            res+=a[i];
            if(s<res)
            {
               while(res>s&&j<i)
               {
               res-=a[j];
               j++;
               }
            }
            if(s==res)
            {
            cout<<j<<" "<<i<<"\n";
            break;
            }
        }
        if(s!=res)
        cout<<-1<<"\n";
    }
	//code
	return 0;
}
