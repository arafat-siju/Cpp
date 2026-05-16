#include <iostream>
using namespace std;

class Shape
{
public:
    double width, height;
    void setDimensions(double w, double h)
    {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    double area() {
        return width * height; 
    }
    double perimeter() {
        return 2 * (width + height); 
    }
};

int main()
{
    Rectangle r;
    r.setDimensions(5.0, 3.0);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}