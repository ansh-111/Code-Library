#include<stdio.h>
#define INF 99999
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n],dist[n],visited[n],cost[n][n],min,node;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                cost[i][j]=INF;
            else
                cost[i][j]=a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        dist[i]=cost[0][i];
        visited[i]=0;
    }
    visited[0]=1;
    dist[0]=0;
    for(i=0;i<n-1;i++)
    {
        min=INF;
        for(i=0;i<n;i++)
        {
            if(dist[i]<min&&visited[i]!=1)
            {
                min=dist[i];
                node=i;
            }
        }
        visited[node]=1;
        for(i=0;i<n;i++)
        {
            if(!visited[i]&&((min+cost[node][i])<dist[i]))
                dist[i]=min+cost[node][i];
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",dist[i]);

}
