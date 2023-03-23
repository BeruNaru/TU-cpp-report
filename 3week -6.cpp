#include <iostream>
#include <algorithm>
using namespace std;

int max(int x[], int n);
float ave(int x[], int n);
void sort(int x[], int n);
void printArray(int x[], int n);

int main() {
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);

    cout << "정수 5개를 임의로 입력\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "최댓값: " << max(a, n) << endl;
    cout << "평균값: " << ave(a, n) << endl;

    cout << "정렬 전: ";
    printArray(a, n);

    sort(a, n);

    cout << "정렬 후: ";
    printArray(a, n);

    return 0;
}

int max(int x[], int n) {
    int m = x[0];
    for (int i = 1; i < n; i++) {
        if (m < x[i]) m = x[i];
    }
    return m;
}

float ave(int x[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s = s + x[i];
    }
    return s / n;
}

void sort(int x[], int n) {
    std::sort(x, x + n);
}

void printArray(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}
