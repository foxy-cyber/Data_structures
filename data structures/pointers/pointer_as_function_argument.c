#include<stdio.h>
void increment(int *p)
{
    *p = (*p)+1;
    // printf("%d ", p);
}
void main()
{
    int a;
    a =25;
    increment(&a);
    printf("%d",a);
}