#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) { }

    
    Complex operator+(const Complex& obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }

    
    Complex operator-(const Complex& obj) const {
        return Complex(real - obj.real, imag - obj.imag);
    }

    
    void output() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex A(1, 2), B(3, 4);
    Complex C = A + B;   
    Complex D = A - B;   
    
    cout << "A + B = ";
    C.output();
    
    cout << "A - B = ";
    D.output();
    
    return 0;
}
