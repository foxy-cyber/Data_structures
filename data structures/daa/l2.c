#include<stdio.h>
int bfs(int a[10][10],int n, int sr)
{
    int vis[10],q[10],f=0,r=-1,v,u;//q refers to QUEUE ... f r are front and rear
    for(v=1;v<=n;v++)
    vis[v]=0;//let visited of every land be zero at initial
    //add the starting land number to QUEUE                                       
    q[++r]=sr;
    //set the starting land number inputted as visited
    vis[sr]=1;
    printf("\nTRAVERSED BFS:");
    while(f<=r)
    {
        u=q[f++];//dequeue the element and explore it completely
        for(v=1;v<=n;v++)
        if(a[u][v]==1 && vis[v]==0)
        {
            q[++r]=v;//add to QUEUE
            vis[v]=1;//mark as visited
            printf("%d %d___",u,v);
        }
    }

    
}
int main()
{
    int a[10][10];
    int i,j,n,s;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter the matrix representation:\n");
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
    printf("Enter the source city: ");
    scanf("%d", &s);
    bfs(a,n,s);
}
