#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main() {
    int a, b;

  
    cout << "Enter two integers: ";
    cin >> a >> b;

    swap(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
