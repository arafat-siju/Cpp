#include <iostream>
using namespace std;

class mother {
public:
    void display() {
        cout << "Display function of mother" << endl;
    }
};

class daughter : public mother {
public:
    void display() {
        cout << "Display function of daughter" << endl;
    }
    void showBoth() {
        display();
        mother::display();
    }
};

int main() {
    daughter d;
    d.showBoth();
    return 0;
}