#include <iostream>
using namespace std;

class student {
private:
    int roll;
protected:
    char gender;
public:
    void getRoll() {
        cout << "Enter roll: ";
        cin >> roll;
    }
    void displayRoll() {
        cout << "Roll: " << roll << endl;
    }
};

class result : private student {
private:
    float marks;
public:
    void getMarks() {
        getRoll();
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayMarks() {
        displayRoll();
        cout << "Sex: " << gender << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    result r;
    r.getMarks();
    r.displayMarks();
    return 0;
}