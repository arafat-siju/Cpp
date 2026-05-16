#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void input(int r, int i) {
        real = r;
        imag = i;
    }
    Complex add(Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output() {
        cout << real << "+i" << imag << endl;
    }
};

int main() {
    Complex A, B, C;
    A.input(1, 2);
    B.input(3, 4);
    C = A.add(B);
    C.output();
    return 0;
}