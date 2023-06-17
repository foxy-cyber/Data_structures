#include<iostream>

using namespace std;

int main()
{
    int ar[] = {1,2,3,4,5,6,7};
    int l,m,en,sr;
    bool t=false;
    l = 0;
    en = (sizeof(ar)/4);
    cout<<en;
    cout<<"Enter search element: "<<endl;
    cin>>sr;

    while(l!=en)
    {
        // Binary_search ob;
        m = (l+en)/2;
        if(sr<ar[m])
        en = m-1;
        else if(sr==ar[m])
        {
        t=true;
        cout<<"Search element found at index :"<<m;
        break;
        }
        else
        l=m+1;

    }
    if (!t)
        cout<<"Element not found in the array";
   

}