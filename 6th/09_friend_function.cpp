#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;
public:
    Numbers(int x, int y) : a(x), b(y) { }
    friend float average(Numbers n);
};

float average(Numbers n) {
    return (n.a + n.b) / 2.0f;
}

int main() {
    Numbers n(10, 20);
    cout << "Average = " << average(n) << endl;
    return 0;
}