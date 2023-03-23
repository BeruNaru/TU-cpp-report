#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int max_val = 0; 

    cout << "정수 10개를 입력하세요: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    cout << "입력된 정수 중 최대값: " << max_val << endl;

    return 0;
}
