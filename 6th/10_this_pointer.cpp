#include <iostream>
using namespace std;

class Calculator {
    int value;
public:
    Calculator() : value(0) { }
    Calculator& add(int value) {
        this->value += value;
        return *this;
    }
    Calculator& sub(int value) {
        this->value -= value;
        return *this;
    }
    void show() const {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Calculator c;
    c.add(5).sub(2).add(10);
    c.show();
    return 0;
}