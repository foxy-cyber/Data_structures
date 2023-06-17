#include<iostream>
using namespace std;
class Binary
{
    private:
    // int *ar,n;
    public:
    int BinaryR(int *ar, int first,int last,int sr)
    {
        if(first>last)
            return 0;
        else
        {
            int mid = (last+first)/2;
            if (ar[mid]==sr)
                return mid+1;
            else if(ar[mid]>=sr)
                return BinaryR(ar,first,mid-1,sr);
            else
                return BinaryR(ar,mid+1,last,sr);
        }
    }
};
int main()
{
    Binary ob;
    int i,n;
    cout<<"Enter array size and array elements:"<<endl;
    cin>>n;
    int *ar = new int[n];
    for (i=0;i<n;i++)
    cin>>ar[i];
    int pos = ob.BinaryR(ar,0,n-1,40);
    if(pos!=0)
    cout<<"Search element at: "<<pos;
    else
    cout<<"NOT found";
}