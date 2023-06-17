#include<iostream>
using namespace std;

class COMPLEX {
private:
    int real;
    int imaginary;
public:
    // Constructor that takes two integer arguments and initializes real and imaginary components respectively
    COMPLEX(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    // Overloading '+' to add an integer value to the real part of a complex number and return the resultant complex number
    COMPLEX operator+(int num) {
        return COMPLEX(real + num, imaginary);
    }

    // Overloading '+' operator to add two complex numbers c1 and c2 and return the resultant complex number
    COMPLEX operator+(COMPLEX const &obj) {
        return COMPLEX(real + obj.real, imaginary + obj.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    COMPLEX c1(3, 5);
    COMPLEX c2(4, 7);

    // Adding an integer value to the real part of a complex number using the overloaded '+' operator
    COMPLEX c3 = c1 + 2;

    // Adding two complex numbers using the overloaded '+' operator
    COMPLEX c4 = c1 + c2;

    // Displaying the results
    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    cout << "c3 = ";
    c3.display();

    cout << "c4 = ";
    c4.display();

    return 0;
}
