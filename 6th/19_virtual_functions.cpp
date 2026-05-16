#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show" << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}