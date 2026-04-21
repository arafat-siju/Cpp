#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;
    Complex() {
        cout << "New Number\n";
        real = 0;
        imag = 0;
    }
};

int main() {
    for (int i = 1; i <= 3; i++) {
        Complex obj;
        cout << obj.real << " " << obj.imag << "\n";
    }
    return 0;
}