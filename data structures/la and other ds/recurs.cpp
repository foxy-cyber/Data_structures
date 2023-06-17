#include <iostream>
#include <cmath>

// Function prototype for the factorial function
int factorial(int n);

// Function prototype for the recursive sin function
double sin_recursive(double x, int n, int sign, int i);

int main()
{
    double x;
    int n;

    std::cout << "Enter the value of x in degrees: ";
    std::cin >> x;
    std::cout << "Enter the number of terms to evaluate: ";
    std::cin >> n;

    // Convert x to radians
    x = x * M_PI / 180.0;

    // Initialize variables for the recursive function
    int sign = 1;
    int i = 1;

    // Call the recursive function to evaluate the series
    double result = sin_recursive(x, n, sign, i);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

// Recursive function to evaluate the series
double sin_recursive(double x, int n, int sign, int i)
{
    // Base case: If n is 0, return 0
    if (n == 0)
        return 0;

    // Recursive case: Return the current term plus the result of the next term
    return sign * pow(x, i) / factorial(i) + sin_recursive(x, n - 1, -sign, i + 2);
}

// Function to calculate the factorial of a number
int factorial(int n)
{
    // Base case: If n is 0 or 1, return 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive case: Return n multiplied by the factorial of n - 1
    return n * factorial(n - 1);
}
