#include <iostream>
using namespace std;

class Father
{
public:
    void profession() { 
        cout << "Father is an Engineer." << endl; 
    }
};

class Mother
{
public:
    void hobby() {
        cout << "Mother loves painting." << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void introduce() { 
        cout << "I am the Child." << endl; 
    }
};

int main()
{
    Child c;
    c.introduce();
    c.profession();
    c.hobby();
    return 0;
}