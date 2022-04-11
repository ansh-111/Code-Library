#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x+1],i;
    scanf("%d%d",&a[0],&a[1]);
    for(i=2;i<=x;i++){
    a[i]=a[i-1]+a[i-2];
    }
     printf("%d\t",a[x]);

}
