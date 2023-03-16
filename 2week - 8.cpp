#include <iostream>

using namespace std;

int main() {
    
    int input;
    cout << "정수를 입력하시오 >>";
    cin >> input ;
    
    int i = 1;
    while(i <= 9){
        cout << "x" << i << "=" << input * i << "\n";
 i++;
    }
    return 0;
    }
