#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        string name;
        void checking(int a){
                age = a;
        }
};

int main()
{
    Person pl;
    int x = 232;
    pl.age = 34;
    pl.name = "Cooper";

    cout << x << endl;
    cout << pl.age << endl;
    cout << pl.name << endl;

    return 0;
}