#include <iostream>
using namespace std;

class XYZ {
public:
    XYZ() {
        cout << "Hello";
    }
    ~XYZ() {
        cout << "Hello";
    }
};

int main() {
    XYZ a1;
    for (int i = 1; i < 10; i++) {
        XYZ a1;
    }
    return 0;
}