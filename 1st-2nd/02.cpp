#include <iostream>
using namespace std;
class Person{
    private:
        int age;
        string name;
    public:
        void set_age(int a){
            age = a;
        }

        int get_age()
        {
            return age;
        }    
        // access private component by getter-setter method
};

int main()
{
    Person pl;

    int x = 232;
    pl.set_age(50);

    cout << pl.get_age() << endl;

    return 0;
}