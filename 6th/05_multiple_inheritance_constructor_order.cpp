#include <iostream>
using namespace std;

class A {
public: 
    A() { 
        cout << "A constructor" << endl; 
    } 
};
class B {
public: 
    B() { 
        cout << "B constructor" << endl;
    } 
};

class C : public A, public B {
public:
    C() {
        cout << "C constructor" << endl; 
    }
};

int main() {
    C obj;
    return 0;
}