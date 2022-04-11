#include<stdio.h>
void sel_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sel_sort(a,n);
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
}

