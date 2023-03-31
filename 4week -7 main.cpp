#include <iostream>
#include "cylinder.h"

using namespace std;

int main() {
    Cylinder cylinder1;
    cylinder1.showArea();

    Cylinder cylinder2(10, 5);
    cylinder2.showArea();

    cylinder1.setRadius(3);
    cylinder1.setHeight(7);
    cylinder1.showArea();

    return 0;
}
