#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;
public:
    friend void increment(Complex c1);
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

void increment(Complex c1) {
    c1.real++;
    c1.imag++;
    c1.display();
}

int main() {
    Complex c[10];
    c[0].setValue(5, 2);
    c[1].setValue(-2, 3);
    increment(c[0]);
    return 0;
}