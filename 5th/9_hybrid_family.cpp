#include <iostream>
#include <string>
using namespace std;

class GrandParent
{
public:
    void familyName() { 
        cout << "Family: Ahmed" << endl; 
    }
};

class Parent1 : public GrandParent
{
public:
    void skill1() { 
        cout << "Parent1 skill: Cricket" << endl; 
    }
};

class Parent2 : public GrandParent
{
public:
    void skill2() { 
        cout << "Parent2 skill: Cooking" << endl; 
    }
};

class GrandChild : public Parent1, public Parent2
{
public:
    void ownSkill() { 
        cout << "GrandChild skill: Programming" << endl;
    }
    void showAll()
    {
        Parent1::familyName();
        skill1();
        skill2();
        ownSkill();
    }
};

int main()
{
    GrandChild gc;
    gc.showAll();
    return 0;
}