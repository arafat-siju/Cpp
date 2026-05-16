#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void displayInfo() { cout << "Name: " << name << ", Age: " << age << endl; }
};

class Scholar
{
public:
    double gpa;
    void displayGPA() { 
        cout << "GPA: " << gpa << endl; 
    }
};

class Student : public Person, public Scholar
{
public:
    string department;
    void displayStudent()
    {
        displayInfo();
        displayGPA();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Student s;
    s.name = "Siju";
    s.age = 20;
    s.gpa = 3.85;
    s.department = "ECE";
    s.displayStudent();
    return 0;
}
