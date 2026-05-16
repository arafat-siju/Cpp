#include <iostream>
using namespace std;

class LivingBeing
{
public:
    void breathe() { 
        cout << "Living being breathes." << endl; 
    }
};

class Mammal : public LivingBeing
{
public:
    void warmBlooded() { 
        cout << "Mammal is warm-blooded." << endl; 
    }
};

class Human : public Mammal
{
public:
    void think() { 
        cout << "Human can think and reason." << endl; 
    }
};

int main()
{
    Human h;
    h.breathe();
    h.warmBlooded();
    h.think();
    return 0;
}