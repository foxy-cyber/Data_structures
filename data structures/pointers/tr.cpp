#include<iostream>
using namespace std;
int main()
{
    int a = 45;
    int *p = &a;
    int* &ad = p;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"ad= "<<ad<<endl;

    cout<<"&ad= "<<&ad<<endl;


}
