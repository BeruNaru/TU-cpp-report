#include <iostream>
using namespace std;

class Cylinder {
private:
    int radius;
    int height;
    double getArea();
public:
    Cylinder();
    Cylinder(int r, int h);
    void showArea();
    void setRadius(int x);
    void setHeight(int x);
};

Cylinder::Cylinder() {
    radius = 1;
    height = 1;
    cout << "반지름 " << radius << ", 높이 " << height << " 원기둥 생성" << endl;
}

Cylinder::Cylinder(int r, int h) {
    radius = r;
    height = h;
    cout << "반지름 " << radius << ", 높이 " << height << " 원기둥 생성" << endl;
}

double Cylinder::getArea() {
    return 2 * 3.14 * radius * (radius + height);
}

void Cylinder::showArea() {
    cout << "반지름: " << radius << ", 높이: " << height << ", 면적: " << getArea() << endl;
}

void Cylinder::setRadius(int x) {
    radius = x;
}

void Cylinder::setHeight(int x) {
    height = x;
}

int main() {
    Cylinder c1;
    Cylinder c2(10, 5);
    c1.showArea();
    c2.showArea();
    c1.setRadius(3);
    c1.setHeight(7);
    c2.setRadius(6);
    c2.setHeight(2);
    c1.showArea();
    c2.showArea();
    return 0;
}
