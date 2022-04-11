#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x],i,t;
    for(i=0;i<=x;i++)
        scanf("%d",&a[i]);

    i=0;
    for(i=0;i<(x/2);i++)
    {
        t=a[i];
        a[i]=a[x-1-i];
        a[x-1-i]=t;
        for(i=0;i<=x;i++)
        printf("%d\n",a[i]);
    }

}
