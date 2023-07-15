#include<stdio.h>
int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}

void floyd(int n,int W[10][10],int D[10][10])
{
   	int i,j,k;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	D[i][j]=W[i][j];
	for(k=0;k<n;k++)
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
}

void main()
{
	int i,j,n,D[10][10],W[10][10];
	printf("Enter no.of vertices:");
	scanf("%d",&n);
	printf("Enter the cost matrix:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&W[i][j]);
    floyd(n,W,D);	
    printf("All pair shortest path matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",D[i][j]);
		printf("\n");
	}
}