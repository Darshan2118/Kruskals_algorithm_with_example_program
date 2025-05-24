#include <stdio.h>
#include <stdlib.h>
int ne = 1, min_cost = 0;
int i, j, n, min, cost[20][20], parent[20];
void main()
{
    int a, u, b, v;
    printf("Enter the no of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the cost matrix: \n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &cost[i][j]);
    for (i = 1; i <= n; i++)
        parent[i] = 0;
    printf("\nThe edges of spanning are:\n ");
    while (ne < n)
    {
        min = 999;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        while (parent[u])
            u = parent[u];
        while (parent[v])
            v = parent[v];
        if (u != v)
        {
            printf("\nEdge %d\t  (%d->%d) = %d", ne++, a, b, min);
            min_cost = min_cost + min;
            parent[v] = u;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\nMininum cost = %d\n\n", min_cost);
}