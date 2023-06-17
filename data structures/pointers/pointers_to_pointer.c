#include<stdio.h>
void main()
{
    int a = 35;
    int *p;
    p = &a;
    printf("\nint a %d and pointer p %d\n",a,p);
    // printf(" pointer p+1 %d \n",(p+1));
    int **q;
    q = &p;
    printf("pointer to pointer q %d\n",q);
    printf("value of *q %d\n",*q);
    printf("value of **q %d\n",**q);
    // printf("pointer to pointer q+2 %d",(q+2));

}