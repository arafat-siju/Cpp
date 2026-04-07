#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        void set_age (int a) {
            age = a;
        }
    // access private component by getter-setter method

    int get_age() {
        return age;
    }
    // change private components

    void manipulate_age(bool flag){

        if (flag){
            age++;
        }

        else {
            age--;
        }

    }
};

int main()
{
    Person p1;
    int x = 232;

    p1.set_age(50);

    cout << p1.get_age() << endl;

    p1.manipulate_age(true and false);    // true and false = false

    cout << p1.get_age() << endl;

    return 0;
}