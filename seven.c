// WAP to implement Bellman-Ford Algorithm.

#include <stdio.h>

#define INF 9999

int main()
{
    int n, e, i, j;
    int u[20], v[20], w[20];
    int dist[10], src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (source destination weight):\n");

    for (i = 0; i < e; i++)
        scanf("%d %d %d", &u[i], &v[i], &w[i]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (i = 0; i < n; i++)
        dist[i] = INF;

    dist[src] = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < e; j++)
        {
            if (dist[u[j]] != INF &&
                dist[u[j]] + w[j] < dist[v[j]])
            {
                dist[v[j]] = dist[u[j]] + w[j];
            }
        }
    }

    for (j = 0; j < e; j++)
    {
        if (dist[u[j]] != INF &&
            dist[u[j]] + w[j] < dist[v[j]])
        {
            printf("Negative weight cycle exists");
            return 0;
        }
    }

    printf("Shortest distances from source %d:\n", src);

    for (i = 0; i < n; i++)
    {
        if (dist[i] == INF)
            printf("Vertex %d: No path\n", i);
        else
            printf("Vertex %d: %d\n", i, dist[i]);
    }

    return 0;
}