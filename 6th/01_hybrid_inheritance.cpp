#include <iostream>
using namespace std;

class student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
    void putRoll() {
        cout << "Roll Number: " << roll << endl;
    }
};

class test : public student {
protected:
    int part1, part2;
public:
    void getMarks() {
        cout << "Enter marks in SA1: "; cin >> part1;
        cout << "Enter marks in SA2: "; cin >> part2;
    }
    void putMarks() {
        cout << "Marks in Part 1: " << part1 << endl;
        cout << "Marks in Part 2: " << part2 << endl;
    }
};

class sports {
protected:
    int score;
public:
    void getSportsMarks() {
        cout << "Enter marks in Physical Education: ";
        cin >> score;
    }
    void putSportsMarks() {
        cout << "Additional Marks: " << score << endl;
    }
};

class result : public test, public sports {
    int total;
public:
    void display() {
        total = part1 + part2 + score;
        putRoll();
        putMarks();
        putSportsMarks();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    result s1;
    s1.getRoll();
    s1.getMarks();
    s1.getSportsMarks();
    s1.display();
    return 0;
}