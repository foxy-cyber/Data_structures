#include<stdio.h>
int partition(int a[7],int l, int h)
{
    int pivot = a[l],t, i=l,j=h;
    do
    {
        do i++; while(a[i]<= pivot);
        do j--; while(a[j]> pivot);
        if(i<j) {t=a[i]; a[i]=a[j]; a[j]=t;}
    }while(i<j);
    t=a[j]; a[j]=a[l]; a[l]=t;
    return j;
}
void quicksort(int a[7], int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}
int main()
{
    int a[] = {4,7,1,42,8,9,23};
    int x,i,j,n=7;
    quicksort(a,0,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}