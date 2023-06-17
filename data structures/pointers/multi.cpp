#include<iostream>
using namespace std;
int multi(int a,int b)
{
    if(a==1)
    return b;
    if(b==1)
    return a;
    else
    return (a+(multi(a,b-1)));
}
int main()
{
    
    cout<<multi(10,39)<<endl;
    cout<<multi(20,5)<<endl;
    
}