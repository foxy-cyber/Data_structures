#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int minDistance(int dist[], bool sptSet[], int n) 
{
    int min = INT_MAX, j=0;
    for (int v = 1; v <= n; v++) 
        if (sptSet[v] == false && dist[v] < min)
            min = dist[v], j = v;
    return j;
}

void dijkstra(int graph[10][10], int src, int dist[10], int n) 
{
    bool sptSet[10];
    for (int i = 1; i <= n; i++) 
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;
    for (int count = 1; count <=n; count++) 
    {
        int u = minDistance(dist, sptSet, n);
        sptSet[u] = true;
        for (int v = 1; v <= n; v++) 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
}

int main() 
{
    int i, j, cost[10][10], dist[10], n, src;
    printf("\nEnter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &cost[i][j]);

    printf("\nEnter the source vertex: ");
    scanf("%d", &src);


    dijkstra(cost, src, dist, n);

    printf("Shortest distances:\n");
    for (i = 1; i <= n; i++)
        printf("%d to %d = %d\n", src, i, dist[i]);
    
}
