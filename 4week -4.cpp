#include <iostream>

using namespace std;

class Cylinder {
public:
    double r;  
    double h;  

    Cylinder() : r(0), h(0) {}
    Cylinder(double radius, double height) : r(radius), h(height) {}
    Cylinder(double radius) : r(radius), h(1) {} 

    double getArea() const {  
        return r * r * h * 3.14;
    }

    void showCylinder() const {  
       cout << "반지름: " << r << ", 높이: " << h << ", 면적: " << getArea() << endl;
    }
};

int main() {

    Cylinder cylinder1(10, 5);
    Cylinder cylinder2(5);
    Cylinder cylinder3;

    cylinder1.showCylinder();
    cylinder2.showCylinder();
    cylinder3.showCylinder();

    return 0;
}
