#include<iostream>
using namespace std;
int main()
{
    int *ar;ar[0]=10;ar[1]=20;ar[2]=40;ar[3]=50;ar[4]=60;
    int n=5,pos=2;
    for(int i=n-1;i>=pos;i--)
        ar[i+1]=ar[i];
    ar[pos]=30;n++;
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
}
