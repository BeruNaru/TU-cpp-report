#include <iostream>
using namespace std;

class Rect {
    int w, h;

    int getArea() {
        return w * h;
    }

public:
    void showRect() {
        cout << "가로:" << w << ", 세로 :" << h << "면적" << getArea() << endl;
    }



    Rect() { w = 1; h = 1; }
    Rect(int x){ w = x; h = 1; }
    Rect(int x, int y) { w = x; h = y; }
    void setWH(int x, int y) { w = x; h = y; }

};

int main() {
    Rect a[5];
    int x, y;


    cout << "5개의 사각형의 가로 세로 값을 순서대로 입력하시오:";

    for (int i = 0; i < 5; i++) {
        cin >> x >> y;
        a[i].setWH(x, y);

    }

    return 0;
