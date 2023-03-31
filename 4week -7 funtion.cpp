#include <iostream>
#include "cylinder.h"

using namespace std;

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
    return radius * radius * height * 3.14;
}

void Cylinder::showArea() {
    cout << "반지름 " << radius << ", 높이 " << height << "의 원기둥 면적은 " << getArea() << endl;
}

void Cylinder::setRadius(int r) {
    radius = r;
}

void Cylinder::setHeight(int h) {
    height = h;
}
