#include <stdio.h>
int max(int x, int y)
{return ((x > y) ? x : y);}

int knap(int n, int w[10], int val[10], int m, int v[10][10])
{
    int i, j;
    for (i = 0; i <= n; i++)
        for (j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                v[i][j] = 0;
            else if (j < w[i])
                v[i][j] = v[i - 1][j];
            else
                v[i][j] = max(v[i - 1][j], val[i] + v[i - 1][j - w[i]]);
        }
    printf("\n The table for solving knapsack problem using dynamic programming is:\n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
            printf("%d\t", v[i][j]);
        printf("\n");
    }
}

void main()
{
    int v[10][10], n, i, j, w[10], val[10], m, res;
    printf("Enter the number of items:");
    scanf("%d", &n);
    printf("Enter the weights of %d items:", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    printf("Enter the value of %d items:", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &val[i]);
    printf("Enter the capacity of the basket:");
    scanf("%d", &m);
    for (i = 0; i <= n; i++)
        for (j = 0; j <= m; j++)
            v[i][j] = 0;
    res = knap(n, w, val, m, v);
    printf("Optimal solution for the knapsack problem is %d\n", v[n][m]);
}
