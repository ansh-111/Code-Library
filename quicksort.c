#include<stdio.h>
int part(int a[],int low,int high)
{
    int i=low-1,pivot=a[high],temp=0,j;
    for(j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return (i+1);
}
void quick(int a[],int low,int high)
{
    int pi;
    if(high>low)
    {
        pi=part(a,low,high);
        quick(a,low,pi-1);
        quick(a,pi+1,high);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}
