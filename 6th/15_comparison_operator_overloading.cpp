#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m = 0) : marks(m) { }
    bool operator>(Student other) {
        return marks > other.marks;
    }
};

int main() {
    Student a(85), b(70);
    if (a > b) cout << "a has higher marks" << endl;
    return 0;
}