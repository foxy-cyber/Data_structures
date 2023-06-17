#include<stdio.h>
#include<string.h>

void str(char cre[])
{
    printf("%d\n",&(cre));
}
void main()
{
    char c[10] = "STRING";
    str(c);
    printf("%s\n",c);
}