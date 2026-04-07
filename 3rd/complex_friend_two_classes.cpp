#include <iostream>
using namespace std;

class Angle;

class Complex {
    int real;
    int imag;
public:
    friend void increment(Complex c1);
    friend Complex changeComplexAngle(Complex c1, Angle a1);
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

class Angle {
    float degree;
public:
    friend Complex changeComplexAngle(Complex c1, Angle a1);
    void setdegree(float degree) {
        this->degree = degree;
    }
    float getdegree() {
        return degree;
    }
};

void increment(Complex c1) {
    c1.real++;
    c1.imag++;
    c1.display();
}

Complex changeComplexAngle(Complex c1, Angle a1) {
    Complex tempResult;
    int resultReal = c1.real + a1.degree;
    tempResult.setValue(resultReal, c1.imag);
    return tempResult;
}

int main() 
{
    Complex c[10];
    c[0].setValue(5, 2);
    c[1].setValue(-2, 3);
    increment(c[0]);

    Angle a1;
    a1.setdegree(25.0);

    cout << a1.getdegree() << endl;
    c[3] = changeComplexAngle(c[0], a1);
    c[3].display();
    return 0;
}