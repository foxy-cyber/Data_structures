#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1||n==0)
    return n;
    else
    return (fib(n-2)+fib(n-1));
}
int main()
{
    for(int i=0;i<5;i++)
    cout<<fib(i)<<" ";
    cout<<endl;
}