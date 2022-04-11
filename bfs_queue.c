#include<stdio.h>
#define MAX 10
int n,a[MAX][MAX],visited[MAX],q[MAX],f=0,r=-1;
void bfs(int src)
{
    for(int i=0;i<n;i++)
    {
        if(a[src][i]&&!visited[i])
        {
            q[++r]=i;
        }
        if(r>=f)
        {
            visited[q[f]]=1;
            bfs(q[f++]);
        }
    }
}
void dfs(int src)
{
    printf("%d ",src);
    visited[src]=1;
    for(int j=0;j<n;j++)
    {
        if(!visited[j]&&a[src][j])
            dfs(j);
    }
}
int main()
{
    int src;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
        visited[i]=0;
    scanf("%d",&src);
    //bfs(src);
    dfs(src);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",q[i]);
}
