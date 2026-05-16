#include <iostream>
using namespace std;

class item {
    int code;
    float price;
public:
    void getdata(int a, float b) {
        code = a;
        price = b;
    }
    void show() {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    item x;
    item *ptr = &x;

    x.getdata(100, 75.50);
    x.show();

    ptr->getdata(200, 99.99);
    ptr->show();
    (*ptr).show();

    item *dynamicItem = new item;
    dynamicItem->getdata(300, 50.25);
    dynamicItem->show();
    delete dynamicItem;

    item *items = new item[10];
    delete[] items;

    return 0;
}