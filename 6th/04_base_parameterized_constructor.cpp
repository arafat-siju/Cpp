#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    Base(int i) {
        x = i;
        cout << "Base parameterized constructor" << endl;
    }
};

class Derived : public Base {
    int y;
public:
    Derived(int i, int j) : Base(i) {
        y = j;
        cout << "Derived parameterized constructor" << endl;
    }
    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Derived d(10, 20);
    d.show();
    return 0;
}