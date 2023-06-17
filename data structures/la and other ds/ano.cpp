#include<iostream>
#include<math.h>
using namespace std;
class Recursive_sine
{
    public:
    int fact(int n)
    {
        if(n==0||n==1)
            return 1;
        else
            return n*fact(n-1);
    }
    double sine(double x, int n, int sign, int i)
    {
        if(n==0)
            return 0;
        else
        {
            double term = sign*pow(x,i) / fact(i) ;
            return term + sine(x,n-1,-sign,i+2);
        }      
    }
};
int main()
{
    Recursive_sine ob;
    int n, i=1, sign=1; double x;
    cout<<"sin(x)=x-x^3/ 3! +x^5 / 5! ................\n";
    cout<<"Value of x in degrees and n respectively: "<<endl;
    cin>>x>>n;
    x = x*(M_PI/180);//M_PI is value of pi i.e 3.14159..  
    double res = ob.sine(x,n,sign,i);
    cout<<"sin(x): "<<res<<endl;
}
