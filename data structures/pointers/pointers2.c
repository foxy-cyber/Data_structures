#include<stdio.h>
int main()
{
    
    int a;
    
    a= 20;
    int *p;
    p=&a;
    void *p1;
    p1 = p;
    printf("value of p (address) %d\n",p);

    printf("%d\n",p1);
    printf("%d\n",(p1+1));

}