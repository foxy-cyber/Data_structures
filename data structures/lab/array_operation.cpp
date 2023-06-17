#include<iostream>
using namespace std;

class Array
{
    private:
    int n,*ar,pos,val,i,del;
    public:
    void getArray()
    {
        cout<<"Enter array size and array elements:"<<endl;
        cin>>n;
        ar = new int[n];
        for (i=0;i<n;i++)
        {
            cout<<i+1<<")";
            cin>>ar[i];

        }
    }
    void insertArray()
    {
        cout<<"Enter the position:"<<endl;
        cin>>pos;
        cout<<"Enter value to insert at position "<<pos<<endl;
        cin>>val;
        n++;pos--;
        for(i=n-2;i>=pos;i--)
            ar[i+1]= ar[i];
        ar[pos] = val;
    }
    void deleteArray(int del)
    {
        for(i=del;i<n;i++)
        ar[i] = ar[i+1];
        n--;
    }       
    void display()
    {
        cout<<"Array elements are:"<<endl;
        for(i=0;i<n;i++)
        cout<<(i+1)<<")"<<ar[i]<<endl;            
    }
};
int main()
{
    int ch, del,t=1;
    Array ob;
    ob.getArray();
    while(t)
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1.Display\n2.Insert\n3.Delete\n4.Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            ob.display();
            break;
        case 2:
            ob.insertArray();
            break;
        case 3:
            cout<<"Enter position to be deleted"<<endl;
            cin>>del;del--;
            ob.deleteArray(del);
            break;
        case 4:
            exit(0);

        default:
            cout<<"Invalid choice!"<<endl;
            
        }
        cout<<"If you need to continue press 1 else 0\n";
        cin>>t;
    }
}