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
        
    // change private components
        void manipulate_age(bool);  // function prototype or signature
};

// defining function outside of class
void Person::manipulate_age(bool flag) {
    if(flag){
        age ++ ;
    }
    else{
        age -- ;
    }
}

int main()
{
    Person p1;

    p1.set_both();

    p1.manipulate_age(true);

    cout << "\nName: " << p1.get_name() << endl;
    cout << "Age: " << p1.get_age() << endl;

    return 0;
}