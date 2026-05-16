#include <iostream>
using namespace std;

class A {
public:
    A(){
        cout << "Constructor of Base Class A" << endl;
    }
    ~A() {
        cout << "Destructor of Base Class A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of Derived Class B" << endl; 
    }
    ~B() {
        cout << "Destructor of Derived Class B" << endl; 
    }
};

int main() {
    B obj;
    return 0;
}