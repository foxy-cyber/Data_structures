#include<stdio.h>
#include<stdlib.h>
int ar[20];
void merge(int l, int mid, int h)
{
    int i,j,k;
    i=k=l;j=mid+1;
    int b[100];
    while(i<=mid && j<=h)
    {
        if(ar[i]<ar[j])
        b[k++]=ar[i++];
        else
        b[k++]=ar[j++];
    }
    while(i<=mid)
    b[k++]=ar[i++];
    while(j<=h)
    b[k++]=ar[j++];
    for(i=l;i<=h;i++)
    ar[i]=b[i];
}
void mergesort(int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(l,mid);
        mergesort(mid+1,h);
        merge(l,mid,h);
    }
}
int main()
{
    ar[0]=8;ar[1]=2;ar[2]=9;ar[3]=6;ar[4]=5;ar[5]=3;ar[6]=7;ar[7]=4;
    for(int i=0;i<8;i++)
    printf("%d ",ar[i]);printf("\n");
    mergesort(0,7);
    for(int i=0;i<8;i++)
    printf("%d ",ar[i]);printf("\n"); 

}