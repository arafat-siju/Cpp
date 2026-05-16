#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    void eat() {
        cout << name << " is eating." << endl; 
    }
    void breathe() { 
        cout << name << " is breathing." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark() { 
        cout << name << " says: Woof! Woof!" << endl;
    }
};

int main()
{
    Dog d;
    d.name = "Bruno";
    d.eat();
    d.breathe();
    d.bark();
    return 0;
}