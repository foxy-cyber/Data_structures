#include<stdio.h>
int main()
{
    int a;
    // int *p;
    a= 20;
    int* p;
    p=&a;
    printf("value of p: %d\n",p);
    printf("value of *p: %d\n",*p);
    printf("value of &a: %d\n",&a);
    printf("value of (p+2): %d\n",p+2);//pointer arithmetic increments address by 2*(4bytes)
    printf("value of *(p+2): %d\n",*(p+2));// prints garbage value
}