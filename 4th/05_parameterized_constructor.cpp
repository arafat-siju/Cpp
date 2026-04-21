#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;
    Complex() { }

    Complex(int x, int y) {
        cout << "New Number: "<< x << " (real), " << y << " (imag)\n";
        real = x;
        imag = y;
    }
};

int main() {
    for (int i = 1; i <= 3; i++) {
        int p, q;
        cout << "Enter real and imaginary parts: ";
        cin >> p >> q;

        Complex obj(p, q);

        cout << "Stored Complex number: "<< obj.real << " + " << obj.imag << "i\n" << endl;
    }
    return 0;
}
