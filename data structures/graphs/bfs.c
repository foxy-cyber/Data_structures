#include<stdio.h>
#include<time.h>
void bfs(int a[10][10],int n, int sr)
{
    int vis[10],q[10],f=0,r=-1,u,v;
    for(v=1;v<=n;v++)
        vis[v]=0;
    q[++r]=sr;
    vis[sr]=1;
    printf("The BFS traversed is:");
    while(f<=r)
    {
        u=q[f++];
        for(v=1;v<=n;v++)
        if(a[u][v]==1 && vis[v]==0)
        {
            q[++r]=v;
            printf(" %d %d ",u,v);
            vis[v]=1;
        }
    }
}
int main()
{
    int a[10][10],n,i,j,s;
    double clk;clock_t st,ent;
    printf("Enter the number of cities:");
    scanf("%d",&n);
    printf("Enter the matrix representation\n");
    for (i = 1; i <=n; i++)
        for (j = 1; j <=n; j++)
        {
            if (i == j)
                a[i][j] = 0; // Set diagonal elements to zero
            else
            {
                printf("(%d,%d):", i, j);
                scanf("%d", &a[i][j]);
            }
        }
    printf("Enter the source city:");
    scanf("%d",&s);
    st = clock();
    bfs(a,n,s);
    ent=clock();
    clk = (double)(ent-st)/CLOCKS_PER_SEC;
    printf("\ntime %f\n",clk);
}
