https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{int z,j,i;
    for(i=n;i>0;i--)
    {
        for(z=n;z>0;z--)
        {
        for(j=i;j>0;j--)
            cout<<z<<" ";
        }
        cout<<"$";
    }
//Your code here
}
