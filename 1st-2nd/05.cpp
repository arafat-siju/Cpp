#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        void set_age(){
            cout << "Enter Your Age: ";
            cin >> age;
        }
// access private component by getter-setter method
        int get_age(){
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
    int x = 232;

    p1.set_age();

    cout << p1.get_age() << endl;

    p1.manipulate_age(false);

    cout << p1.get_age() << endl;

    return 0;
}