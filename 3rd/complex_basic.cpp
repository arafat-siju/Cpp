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
};

int main() {
    Complex c1;
    c1.setValue(5, 2);
    cout << c1.getReal() << "+" << c1.getImag() << "i" << endl;
    return 0;
}