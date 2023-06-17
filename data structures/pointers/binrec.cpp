#include<iostream>
using namespace std;
class Binary_search{
    public:
    void readArray(int ar[10]){
        cout<<"Enter 10 elements (in ascending order):\n";       
        for (int i=0;i<10;i++)
        cin>>ar[i];
    }
    int binarySearch(int *ar,int f,int l,int sr)
    {  
        if(f>l)
        return 0;
        else{
            int m = (l+f)/2;
            if(ar[m]==sr)
            return (m+1);              
            else if(ar[m]>sr)
            return binarySearch(ar,f,m-1,sr);
            else 
            return binarySearch(ar,m+1,l,sr);    
        }    
    }   
};
int main()
{
    int ar[10];
    Binary_search ob;
    int sr, pos;
    ob.readArray(ar);
    cout<<"Enter element to be searched:";
    cin>>sr;
    pos = ob.binarySearch(ar, 0,9,sr);
    if(pos==0)
        cout<<sr<<" not found\n";
    else
        cout<<sr<<" found at position "<<pos<<endl;
    return 0;
}