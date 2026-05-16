#include <iostream>
using namespace std;

class Base {
public:
    static void show() { 
        cout << "Base static show" << endl; 
    }
};

class Derived : public Base {
public:
    static void show() { 
        cout << "Derived static show" << endl; 
    }
};

int main() {
    Base::show();
    Derived::show();
    return 0;
}