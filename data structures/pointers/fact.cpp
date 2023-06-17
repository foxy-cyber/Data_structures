#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1||a==0)
    return 1;
    else
    return a*fact(a-1);
}
int main()
{
    
    cout<<fact(4)<<endl;
    cout<<fact(11)<<endl;

}