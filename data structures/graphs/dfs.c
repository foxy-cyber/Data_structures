
#include <stdio.h>
#include <time.h>

void dfs(int a[10][10], int n, int sr, int vis[10])
{
    int v;
    printf("%d ", sr);
    vis[sr] = 1;
    for (v = 1; v <= n; v++)
        if (a[sr][v] == 1 && vis[v] == 0)
            dfs(a, n, v, vis);
}
int main()
{
    int a[10][10], n, i, j, s;
    int vis[10] = {0};
    double clk;
    clock_t st, ent;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter the matrix representation:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i == j)
                a[i][j] = 0; // Set diagonal elements to zero
            else
            {
                printf("(%d,%d):", i, j);
                scanf("%d", &a[i][j]);
            }
        }

    printf("Enter the source city: ");
    scanf("%d", &s);

    st = clock();
    printf("The DFS traversal is: ");
    dfs(a, n, s, vis);
    ent = clock();

    clk = (double)(ent - st) / CLOCKS_PER_SEC;
    printf("\nTime: %f seconds\n", clk);

    return 0;
}
