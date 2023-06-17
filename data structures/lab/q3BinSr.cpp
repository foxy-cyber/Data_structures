#include<iostream>
using namespace std;
class RBS
{
    private:
    int mid;
    public:
    int RecBS(int *ar,int st,int end,int ele)
    {
        if(end<st)
        return 0;
        mid=(st+end)/2;
        if(ar[mid] == ele)
        return mid+1;
        else if(ar[mid]>ele)
            return RecBS(ar,st,mid-1,ele);
        else
            return RecBS(ar,mid+1,end,ele);
    }
};
int main()
{
    int ar[6] = {20,30,40,50,60,70};
    int st=0,end=5,mid;
    RBS ob;
    cout<<"20 found at "<<ob.RecBS(ar,st,end,70);
}