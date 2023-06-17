#include<iostream>
using namespace std;
int main()
{
    int *ar1;
    ar1 =  new int[3];
    ar1[0]= 1;
    ar1[1]= 2;
    ar1[2]= 3;
    int* ar2;
    ar2 = new int[5];
    for (int i=0;i<3;i++)
    ar2[i] = ar1[i];
    ar2[3]= 44;ar2[4] = 55;
    delete []ar1; 

    ar1 = ar2;
    ar2 = NULL;

    for (int i=0;i<5;i++)
    cout<<" "<<ar1[i];
}
