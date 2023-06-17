#include<stdio.h>
int main()
{
    int a[] = {4,7,1,42,8,9,23};
    int i,t,j,n=7;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i;j++)
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1]; 
            a[j+1]=t;
        }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}