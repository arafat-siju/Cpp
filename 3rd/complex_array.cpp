#include <iostream>
using namespace std;

class Complex{
    int real;
    int imag;

public:
    void setValue(int real, int imag){
        this->real = real;
        this->imag = imag;
    }
    int getReal() { 
        return real; 
    }
    int getImag() { 
        return imag;
    }
    void display(){
        cout << getReal() << "+" << getImag() << "i" << endl;
    }
};

int main()
{
    Complex c[10];
    c[0].setValue(5, 2);
    c[1].setValue(-2, 3);
    c[0].display();
    c[1].display();
    return 0;
}