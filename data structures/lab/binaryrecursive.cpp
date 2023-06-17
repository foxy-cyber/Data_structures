#include<iostream>  
//code doesnt work for all values
using namespace std;

int binary(int a[],int st, int en, int sr)
{
    if(st!=en){
    int m;
    m = (st+(en-1))/2;

    if (a[m]==sr)
    return m;
    else if(a[m]>sr)
    return(binary(a,st,(m-1),sr));
    else if(a[m]<sr)
    return(binary(a,(m+1),en,sr));
    }
    return -1;
}
int main()
{
    int st,en,sr;
    st = 0;
    int ar[]= {1,2,3,4,5,6,7};
    en=(sizeof(ar)/4);
    cout<<"en value"<<en<<endl;
    cout<<"Searh element?\n";
    cin>>sr;
    int in = binary(ar,st,en,sr);
    if(in==-1)
    cout<<"Not found";
    else
    cout<<"Element at index "<<in;
    return 0;
}
