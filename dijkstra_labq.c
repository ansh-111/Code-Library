#include <stdio.h>
#include<stdlib.h>
#define INF 9999
#define MAX 10
void dij(int a[MAX][MAX], int n, int src)
{
    int cost[MAX][MAX], dis[MAX], prev[MAX], visited[MAX], mindis, i, j, z, next_node;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                cost[i][j] = INF;
            else
                cost[i][j] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        dis[i] = cost[src][i];
        prev[i] = src;
        visited[i] = 0;
    }
    visited[src] = 1;
    dis[src] = 0;
    for (z = 1; z < n - 1; z++)
    {
        mindis = INF;
        for (i = 0; i < n; i++)
        {
            if (dis[i] < mindis && visited[i] != 1)
            {
                mindis = dis[i];
                next_node = i;
            }
        }
        visited[next_node] = 1;
        for (i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (mindis + cost[next_node][i] < dis[i])
                {
                    dis[i] = mindis + cost[next_node][i];
                    prev[i] = next_node;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i != src)
        {
            printf("\nDistance from source to %d: is %d\n", i, dis[i]);
            j = i;
            printf("Path Followed is ");
            do
            {
                j = prev[j];
                printf("<--%d", j);
            } while (j != src);
        }
    }
}
int main()
{
    int n, i, j, a[MAX][MAX],start;
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    printf("Enter Adjacency matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter starting node\n");
    scanf("%d",&start);
    dij(a, n, start);
}
