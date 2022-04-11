#include <stdio.h>

int main(void)
{
    int i,n;
    scanf("%d",&n);
    int a[n],min,min1,z;
    for(i=0;i<=(n-1);i++)
    {
    scanf("%d",&a[i]);
    min=min1=a[0];
    if(min>=a[i])
    min=a[i];
    }
    for(z=0;z<=(n-1);z++)
    {
    if(a[i]<=min1 && min !=a[i])
    min1=a[i];
    }
    printf("%d",min1+z);
	return 0;
}

