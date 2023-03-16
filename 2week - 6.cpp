#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    string song("Under kids");
    string rei("tuyu_rei");
    string singer;
    
    cout << song + "를 부른 가수는";
    cout << "(힌트 : 첫글자는" << "rei[0] )?";
    
    getline(cin, singer);
    if (singer == rei)
     cout << "맞았습니다";
    else 
    cout << "틀렸습니다" + rei + "입니다 " << endl;
}
