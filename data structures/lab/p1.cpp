#include<iostream>
using namespace std;
class array
{
    private:
    int n, p,d,i,el,*a;
    public:
    void getArr()
    {
        cout<<"Enter array size:"<<endl;
        cin>>n;
        a = new int[n];
        cout<<"Enter array elements:"<<endl;
        for (i=0;i<n;i++)
        cin>>a[i];

    }
    void display()
    {
        cout<<"Array elements:"<<endl;
        for (i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;

    }
    void insert()
    {
        cout<<"Enter position and element to be inserted respectively:"<<endl;
        cin>>p>>el;

        n++;
        for(i=n-2;i>p-1;i--)
        a[i+1]= a[i];
        a[p]= el;
        display();
    }
    
};
int main()
    {
        array o;
        o.getArr();
        o.display();
        o.insert();
    }
