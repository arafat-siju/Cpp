#include <iostream>
using namespace std;

class B {
public:
    void baseShow() { cout << "Base function" << endl; }
};

class D : public B {
public:
    void derivedShow() { cout << "Derived function" << endl; }
};

int main() {
    B *cptr;
    B b;
    D d;

    cptr = &b;
    cptr->baseShow();

    cptr = &d;
    cptr->baseShow();

    D *dptr = static_cast<D*>(cptr);
    dptr->derivedShow();

    return 0;
}