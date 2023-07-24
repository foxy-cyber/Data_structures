#include<stdio.h>
int d[10][10];
int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}
void floyd(int c[10][10],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    d[i][j]=c[i][j];
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
void main()
{
    int i,j,n,c[10][10];
    scanf("%d",&n);
    printf("enter cost matrix:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&c[i][j]);
    floyd(c,n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        printf("%d ",d[i][j]);
        printf("\n");
    }
}