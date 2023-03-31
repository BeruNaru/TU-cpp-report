#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
    int radius;
    int height;
    double getArea();
public:
    Cylinder();
    Cylinder(int r, int h);
    void showArea();
    void setRadius(int r);
    void setHeight(int h);
};

#endif
