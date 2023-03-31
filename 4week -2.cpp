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
    void showRect() {
        cout << "가로:" << w << ", 세로 :" << h;
        cout << "면적" << getArea() << endl;
    }

    void putWH(int x, int y) {
        w = x; h = y;
    }
};

int main() {
    Rect a, b, c[100];
    a.putWH(10, 10);
    b.putWH(20, 20);
    a.showRect();
    b.showRect();
    return 0;
