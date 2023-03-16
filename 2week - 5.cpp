#include <iostream>
using namespace std;

int main() {
    cout << "거주하는 주소를 입력하세요>>";
    
    char address[100];
    cin.getline(address, 100, '\n');
    
    cout << "주소는 " << address << "입니다\n";
    
}
