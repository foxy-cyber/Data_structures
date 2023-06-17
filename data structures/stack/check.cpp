#include<iostream>
#include<string>
using namespace std;
int main()
{
    
    string T="THERE IS MORE TO LIFE THAN INCREASING ITS SPEED";
    string P="SORT";
    int i,m=4,n=47,j;
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && P[j]==T[j+i]) 
            j++;
        if (j==m) 
        
            break;

    }
    cout<<i<<endl;
    return 7;
}