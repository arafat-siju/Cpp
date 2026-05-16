#include <iostream>
using namespace std;

class Number {
    int num;
public:
    Number(int n = 0) : num(n) { }
    void operator-() {
        num = -num;
    }
    void output() {
        cout << num << endl;
    }
};

class Counter {
    int count;
public:
    Counter(int c = 0) : count(c) { }
    Counter& operator++() {
        ++count;
        return *this;
    }
    void output() {
        cout << count << endl;
    }
};

int main() {
    Number n(5);
    -n;
    n.output();

    Counter c(3);
    ++c;
    c.output();
    return 0;
}