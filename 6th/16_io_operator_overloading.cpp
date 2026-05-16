#include <iostream>
using namespace std;

class Student {
    int roll;
    float marks;
public:
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter roll: ";
        in >> s.roll;
        cout << "Enter marks: ";
        in >> s.marks;
        return in;
    }
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Roll: " << s.roll << ", Marks: " << s.marks;
        return out;
    }
};

int main() {
    Student s;
    cin >> s;
    cout << s << endl;
    return 0;
}