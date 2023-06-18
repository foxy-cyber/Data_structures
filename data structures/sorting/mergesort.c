#include<stdio.h>
int ar[20],mid;
void merge(int l, int mid, int h)
{
    
}
void mergesort(int l,int h)
{
    mid=(l+h)/2;
    mergesort(l,mid);
    mergesort(mid,h);
    merge(l,mid,h);
}