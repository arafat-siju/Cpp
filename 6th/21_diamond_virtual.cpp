#include <iostream>
using namespace std;

// CODE 10: Diamond Problem — Solved with Virtual Inheritance
//
//        A
//       / \
//      B   C
//       \ /
//        D
//
// Without virtual: D gets TWO copies of A → ambiguity!
// With virtual:    D gets ONE shared copy of A → solved!

class A
{
public:
    int data;
    A() : data(0) {}
    void showData() { 
        cout << "Data from A: " << data << endl; 
    }
};

class B : virtual public A
{
public:
    void fromB() { 
        cout << "Reached A through B" << endl; 
    }
};

class C : virtual public A
{
public:
    void fromC() { 
        cout << "Reached A through C" << endl; 
    }
};

class D : public B, public C
{
public:
    void showAll()
    {
        data = 42; // Only ONE copy of A exists — no ambiguity
        showData();
        fromB();
        fromC();
        cout << "Diamond Problem SOLVED with 'virtual'!" << endl;
    }
};

int main()
{
    D obj;
    obj.showAll();
    return 0;
}