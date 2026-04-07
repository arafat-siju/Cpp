#include <iostream>
using namespace std;

class Person{
    private:
        int age;    
        string name;
    public:
    // access private component by getter-setter method
        void set_both() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Age: ";
        cin >> age;
        cout << "\n";
        }
        
        int get_age() {
            return age;
        }
        string get_name() {
            return name;
        }
        
        void get_both() {
            cout << "\nName: " << get_name() << "\nAge: " << get_age() << endl;
        }
};

int main()
{
    int i;
    Person p1[100];

    for (i = 1; i <= 3; i++) {
        p1[i].set_both();
    }

    for (i = 1; i <= 3; i++) {
        p1[i].get_both();
    }

    return 0;
}