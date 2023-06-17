#include<stdio.h>
void sumof(int a[],int size)
{
    int i,s=0;
    for(i=0;i<size;i++)
    s+=a[i];//can also be written as s=s+(*(a+i))
    printf(" %d\n",s);

}
void main()
{
    int a[] ={2,9,6,4,7};   
    int size = sizeof(a)/sizeof(a[0]);
    sumof(a,size);
    // printf("%d\n",a);
    // printf("%d\n",&a[0]);
    // printf("%d\n",*a);
}
