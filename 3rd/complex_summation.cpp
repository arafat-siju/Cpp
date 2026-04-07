#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;
public:
    void setValue(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }
    int getReal() { 
        return real; 
    }
    int getImag() { 
        return imag; 
    }
    void display() {
        cout << getReal() << "+" << getImag() << "i" << endl;
    }
    Complex summation(Complex c1) {
        int tempReal = this->real + c1.real;
        int tempImag = this->imag + c1.imag;
        Complex tempResult;
        tempResult.setValue(tempReal, tempImag);
        return tempResult;
    }
};

int main() {
    Complex c[10];
    c[0].setValue(5, 2);
    c[1].setValue(-2, 3);
    c[3] = c[0].summation(c[1]);
    c[3].display();
    return 0;
}