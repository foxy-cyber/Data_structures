#include<stdio.h>
#include<string.h>
void main()
{
    char c[89];
    c[0]= '3';
    c[1]= '5';
    c[2]= 'A';
    c[3]= 'G';
    int ln = strlen(c);
    printf("%s\n",c);
    printf("%d",ln);

}