#include<stdio.h>
void read(int a[10][10],int a1[10][10],int x);
void mult(int a[10][10],int a1[10][10], int x);
int main()
{
    int a[10][10],a1[10][10],x;
    scanf("%d",&x);
    read(a,a1,x);
    mult(a,a1,x);
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
void mult(int a[10][10],int a1[10][10], int x)
{
    int b[10][10],i=0,j=0,k=0;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            b[i][j]=0;
        for(k=1;k<=x;k++)
        {
        b[i][j]=b[i][j]+(a[i][k]*a1[k][j]);
        }
    }
    }

        for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }

}
