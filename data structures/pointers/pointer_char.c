#include<stdio.h>
#include<string.h>
void main()
{
    char c[10] = "STRING";
    char* C1;
    C1 = c;
    printf("%s\n",c);
    printf("%c\n",(*(C1+1)));
}