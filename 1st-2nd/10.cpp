#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;

public:
    static int generation;

    static void increseGeneration() {
        generation++;
    }

    void setBoth() {
        cin >> age >> name;
    }
    int getAge() {
        return age;
    }
    void manipulateAge(bool flag);
    string returnName() {
        return name;
    }
    void getBoth() {
        cout << getAge() << endl;
        cout << returnName() << endl;
    }
};

void Person::manipulateAge(bool flag) {
    if (flag)
        age++;
    else
        age--;
}
int Person::generation = 30;

int main() {
    Person p[10];

    for (int i = 0; i < 3; i++) {
        p[i].setBoth();
    }
    for (int i = 0; i < 3; i++) {
        p[i].getBoth();
    }

    cout << p[1].getAge() << endl;

    cout << p[0].generation << endl;
    cout << p[1].generation << endl;

    p[0].increseGeneration();

    cout << p[0].generation << endl;
    cout << p[1].generation << endl;

    p[1].manipulateAge(true);
    p[1].getBoth();
    return 0;
}