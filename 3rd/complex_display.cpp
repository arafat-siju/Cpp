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
};

int main() 
{
    Complex c1;
    c1.setValue(5, 2);
    c1.display();
    return 0;
}