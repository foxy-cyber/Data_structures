#include<stdio.h>
int main()
{
    int a[] = {4,7,1,42,8,9,23};
    int x,i,j,n=7;
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=a[i];
        while(j>=0 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}