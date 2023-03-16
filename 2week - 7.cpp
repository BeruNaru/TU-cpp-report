#include <iostream>

using namespace std;

int main() {
    
    int num1, num2, num3, score;
    int maxnum;
    
    cout << ("세개의 정수를 입력하시오 ");
    cin >> num1>> num2 >> num3;
    
    maxnum = num1;
    if (maxnum < num2) maxnum = num2;
    if (maxnum < num3) maxnum = num3;
    
    cout << "제일 큰 값은" << maxnum; 
    }
