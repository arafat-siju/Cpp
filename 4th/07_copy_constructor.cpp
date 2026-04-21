#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex() {
        cout << "Empty Constructor01\n";
    }

    Complex(int x, int y = 10) {
        cout << "Parameterized Constructor02\n";
        real = x;
        imag = y;
    }

    Complex(Complex &A) {
        cout << "CopyConstructor\n";
        real = A.real;
        imag = A.imag;
    }
};

int main() {
    Complex obj1(5);
    Complex obj2 = obj1;
    return 0;
}