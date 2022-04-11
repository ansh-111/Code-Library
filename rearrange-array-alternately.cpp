https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

using namespace std;

int main() {
    long long int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
      long long int a[n],i;
       for(i=1;i<=n;i++)
       cin>>a[i];
       if(n%2==0)
       {
       for(i=1;i<=n/2;i++)
       cout<<a[n-(i-1)]<<" "<<a[i]<<" ";
       }
       else
       {
           for(i=1;i<=n/2;i++)
       cout<<a[n-(i-1)]<<" "<<a[i]<<" ";
       cout<<a[(n+1)/2];
       }
       cout<<"\n";
    }
	//code
	return 0;
}
