#include <iostream>

using namespace std;

void getArea();
void showRect();

class Rect {
    int w, h;

    int getArea() {
        return w * h;
    }

public:

    Rect() {  w = 1; h = 1; }    
    //Rect() : Rect(1,1) { } 
    //Rect() : w(1), h(1) { }
    Rect(int x) { w = 1; h = 1; } 
    //Rect(int x) : Rect(x,1) { } 
    //Rect(int x) :  w(1), h(1) { } 
    Rect(int x, int y) { w = 1; h = 1; }  

    void showRect() {
        cout << "가로:" << w << ", 세로 :" << h << "면적" << getArea() << endl;
    }

    void putWH(int x, int y) {   w = x; h = y;}
};

int main() {
    Rect a, b(10), c(30, 40);


    a.showRect();
    b.showRect();
    c.showRect();
    return 0;
