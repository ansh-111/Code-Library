https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        int j=0,max=1,count=1;
        i=1;
        sort(a,a+n);
        sort(b,b+n);
        while(i<n&&j<n)
        {
            if(a[i]>b[j])
            {
                j++;
                count--;
            }
            else if(a[i]<=b[j])
            {
                count++;
                i++;
            }
            if(count>max)
            max=count;
        }
        cout<<max<<"\n";
    }
	//code
	return 0;
}
