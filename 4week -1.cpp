#include <iostream>

using namespace std;

class Rect {
public:
    int w;  
    int h;  

    int getArea() const {  
        return w * h;
    }

    void showRect() const {  
        cout << "가로: " << w << ", 세로: " << h << ", 면적: " << getArea() << endl;
    }
};

int main() {

    Rect rect1 = { 10, 10 };
    Rect rect2 = { 20, 20 };

    rect1.showRect();
    rect2.showRect();

    return 0;
}
