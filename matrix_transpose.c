#include<stdio.h>
void read(int a[10][10],int x);
void transpose(int a[10][10],int x);
int main()
{
    int a[10][10],x;
    scanf("%d",&x);
    read(a,x);
    transpose(a,x);
}
void read(int a[10][10],int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        scanf("%d",&a[i][j]);
    }

}
void transpose(int a[10][10],int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
            printf("%d\t",a[j][i]);
            printf("\n");
    }
}
