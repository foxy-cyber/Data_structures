#include<stdio.h>
#include<string.h>
#include<conio.h>
#define ASCII 500
int t[ASCII];
void shifttable(char p[])
{
 int i,j,m;
 m=strlen(p);
 for(i=0;i<ASCII;i++)
  t[i]=m;
 for(j=0;j<m-1;j++)
  t[p[j]]=m-1-j;
}
int horspool(char src[],char p[])
{
 int i,j,k,m,n;
 n=strlen(src);
 m=strlen(p);
 printf("Length of text:%d\n",n);
 printf("Length of pattern:%d\n",m);
 i=m-1;
 while(i<n)
 {
  k=0;
  while((k<m)&&(p[m-1-k]==src[i-k]))
   k++;
  if(k==m)
   return(i-m+1);
  else
   i+=t[src[i]];
 }
 return -1;
}
void main()
{
 char src[100],p[100];
 int pos;
 
 printf("Enter the text:");
 gets(src);
 printf("Enter the pattern to be searched:");
 gets(p);
 shifttable(p);
 pos=horspool(src,p);
 if(pos>=0)
  printf("Pattern found starting from position %d\n",pos+1);
 else
  printf("Pattern not found in the text\n");
}
