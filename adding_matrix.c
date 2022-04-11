#include<stdio.h>
void read(int a[10][10],int a1[10][10],int x);
void add(int a[10][10],int a1[10][10], int x);
int main()
{
    int a[10][10],a1[10][10],x;
    scanf("%d",&x);
    read(a,a1,x);
    add (a,a1,x);
}
void read(int a[10][10],int a1[10][10],int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        scanf("%d",&a1[i][j]);
    }
}

void add(int a[10][10],int a1[10][10], int x)
{
    int i,j,b[10][10];
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
    b[i][j]=a[i][j]+a1[i][j];
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
    printf("%d\t",b[i][j]);
    printf("\n");

    }
}
