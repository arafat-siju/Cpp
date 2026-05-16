#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string empName;
    int empID;
    void showEmployee() { 
        cout << "ID: " << empID << " | Name: " << empName << endl; 
    }
};

class Manager : public Employee
{
public:
    int teamSize;
    void showManager()
    {
        showEmployee();
        cout << "Role: Manager | Team Size: " << teamSize << endl;
    }
};

class Developer : public Employee
{
public:
    string language;
    void showDeveloper()
    {
        showEmployee();
        cout << "Role: Developer | Language: " << language << endl;
    }
};

int main()
{
    Manager m;
    m.empName = "Salim";
    m.empID = 101;
    m.teamSize = 8;
    m.showManager();

    Developer dev;
    dev.empName = "Nadia";
    dev.empID = 102;
    dev.language = "C++";
    dev.showDeveloper();
    return 0;
}