
#include <stdio.h>
int A[20]={0,10,20,30,25,5,40,35};
void Insert(int n)
{
    int i=n,t;
    t=A[n];
    while(i>1 && t>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=t;
}
int heap(int n)//delete and return the val
{
    int i,x,j,val,t;
    x=A[n];
    val=A[1];
    A[1]=A[n];
    A[n]=val;
    i=1;j=i*2;
    while(j<n-1)
    {
        if(A[j+1]>A[j])
        j=j+1;
        if(A[j]>A[i])
        {
            t=A[j];//swap 
            A[j]=A[i];
            A[i]=t;
            i=j;j=j*2;
        }else break;
    }
    return val;
}
int main()
{
 // 40,25,35,10,5,20,30
 int i;
 for(i=2;i<=7;i++)
 Insert(i);
 
 for(i=7;i>1;i--)
 heap(i);
 for(i=1;i<=7;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
}