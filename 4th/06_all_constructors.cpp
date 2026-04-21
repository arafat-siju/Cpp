#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex() {        // Empty constructor
        cout << "Constructor01 called\n";
        real = 0;
        imag = 0;
    }

    Complex(int x, int y) {     // Parameterized constructor
        cout << "Constructor02 called\n";
        real = x;
        imag = y;
    }

    Complex(int x) {        // Single-argument constructor
        cout << "Constructor03 called\n";
        real = x;
        imag = 0;
    }

    void display() {
        cout << "Complex number: " << real << " + " << imag << "i\n";
    }
};

int main() {
    for (int i = 1; i <= 3; i++) {
        int p, q;
        cout << "Enter real and imaginary parts for object " << i << ": ";
        cin >> p >> q;
        Complex obj(p, q);
        obj.display();
    }

    // Example usage of single-argument constructor
    cout << "\nCreating obj2 with single-argument constructor...\n";
    Complex obj2(5);
    obj2.display();

    return 0;
}
