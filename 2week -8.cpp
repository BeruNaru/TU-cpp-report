#include <iostream>

using namespace std;

int main() {
    
    int input;
    cout << "정수를 입력하시오 >>";
    cin >> input ;
    
    for(int i =1; i<= 9, i++;){
        cout << "x" << i << "=" << input * i << "\n";
    }
    return 0;
    }
