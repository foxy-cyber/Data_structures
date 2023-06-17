#include <iostream>
using namespace std;

int main()
{
   int x = 3;
   int coef[] = {2, -6, 2, -1}; // array of coefficients in descending order
   int n = sizeof(coef)/sizeof(coef[0]); // number of coefficients

   int result = coef[0]; // initialize the result to the constant term

   for (int i = 1; i < n; i++)
   {
      result = result*x + coef[i]; // apply Horner's rule
   }

   cout << "The value of the polynomial is: " << result << endl;

   return 0;
}
