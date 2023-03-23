#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0; 

    cout << "정수 10개를 입력하세요: " << endl;


    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    
    cout << "입력된 정수의 합계: " << sum << endl;

    return 0;
}
