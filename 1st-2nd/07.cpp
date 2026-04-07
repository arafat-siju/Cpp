#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        void set_both() {
            cout << "Enter Your Name: ";
            cin >> name;
            cout << "Enter Your Age: ";
            cin >> age;
        }
// access private component by getter-setter method
        string get_name() {
            return name;
        }
        int get_age() {
            return age;
        }

        void get_both() {
            cout << "\nName: " << get_name() << "\nAge: " << get_age()  << endl;
        }
        
};


int main()
{
    Person p1;

    p1.set_both();

    p1.get_both();

    return 0;
}