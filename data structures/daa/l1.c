#include<stdio.h>
int main()
{
    int ar[]={10,20,30,40,50,60};
    int mid,l=0,n=6,h=n,sr=60;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(sr==ar[mid])
        {printf("%d position\n",mid+1);return 0;}
        else if(sr<ar[mid])
        h=mid-1;
        else l=mid+1;
    }
    
}
