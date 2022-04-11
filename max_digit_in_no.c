#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x],i,max;
    for(i=0;i<=(x-1);i++)
    {
        scanf("%d",&a[i]);
        max=a[0];
        if(max<a[i])
            max=a[i];
    }
    printf("%d",max);


}
