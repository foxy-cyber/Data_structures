#include<iostream>
using namespace std;
class Array
{
    private:
    int n, *ar;int i;
    public:
    Array(int n)
    {
        this->n=n;
        ar = new int[n];
    }
    void Create()
    {
        cout<<"Enter "<<n<<" elements:";
        for(i=0;i<n;i++)
        cin>>ar[i];
    }
    void display()
    {
        for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<endl;
    }
    void insert()
    {
        cout<<"Enter the position to insert and element respectively:";
        int pos;cin>>pos;int ele;cin>>ele;pos=pos-1;
        for(i=n-1;i>=pos-1;i--)
        ar[i+1]=ar[i];
        ar[pos]=ele;
        n++;
    }
    void remove()
    {
        cout<<"Enter the position to be removed:";
        int pos;cin>>pos;pos=pos-1;
        for(i=pos;i<n;i++)
        ar[i]=ar[i+1];
        n--;
    }
};
int main()
{
    Array ob(5);
    ob.Create();ob.display();ob.insert();ob.display();ob.remove();ob.display();ob.remove();ob.display();
}