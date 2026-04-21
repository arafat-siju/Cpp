#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;
    Complex() {
        cout << "New Number\n";
    }
    ~Complex() {
        cout << "Good Bye\n";
    }
};

int main() {
    for (int i = 1; i <= 3; i++) {
        Complex obj;
    }
    return 0;
}