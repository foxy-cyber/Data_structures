
#include<iostream>
#include<math.h>
using namespace std;
class Terms
{
    public:
    int coeff,exp;
};
int main()
{
    
    Terms *ob;
    int n,i,ev=0;
    cout<<"No of non zero terms\n";
    cin>>n;
    ob = new Terms[n];
    cout<<"Enter "<<n<<" coefficients and exponents respectively:\n";
    for(i=0;i<n;i++)
    {
        cout<<(i+1)<<") coeff: ";
        cin>>ob[i].coeff;
        cout<<" expo(x^(?)): ";
        cin>>ob[i].exp;
    }
    //REPRESENTING POLYNOMIAL
    if(ob[0].coeff<0)
    cout<<"- ";
    for(int i=0;i<n;i++)
    {
        if(ob[i].exp==0)
            cout<<abs(ob[i].coeff);//absolute value i.e minus sign if found only value is printed
        else if(abs(ob[i].coeff)==1)
            cout<<"x^"<<ob[i].exp;
        else
            cout<<abs(ob[i].coeff)<<"x^"<<ob[i].exp;
        if (i < n-1)// why n-1 becoz  after printing last term any other sign further cannot be represented
        {
            //we have handled the case of first term's coeff above 
            //why ob[i+1] beoz u should have knowledge of next terms's sign to print
            if(ob[i+1].coeff>0)
                cout << " + ";   
            else        
                cout << " - ";   
        }
    }
    cout<<endl;
    int x;
    //EVALUATING POLYNOMIAL
    cout<<"Enter value of x? ";
    cin>>x;
    for(i=0;i<n;i++)
        ev+= (ob[i].coeff*pow(x,ob[i].exp));

    cout<<"Evaluating expression: "<<ev<<endl;

}

