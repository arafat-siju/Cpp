#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) { }

    Complex operator+(int num) {
        return Complex(real + num, imag);
    }

    friend Complex operator+(int num, Complex A) {
        return Complex(num + A.real, A.imag);
    }

    void output() {
        cout << real << "+i" << imag << endl;
    }
};

int main() {
    Complex A(3, 4);
    Complex B = A + 5;
    Complex C = 5 + A;
    B.output();
    C.output();
    return 0;
}