#include <iostream>
using namespace std;

int max(int a, int b, int c);
int sum(int a, int b, int c);

int main(void) {

    int a, b, c;

    cout << "정수 3개를 작성하시오 :";
    cin >> a >> b >> c;

    cout << "최댓값 : " << max(a, b, c);
    cout << "합계:" << sum(a, b, c);
}


int max(int a, int b, int c) {

    int n = a;
    if (n < b) n = b;
    if (n < c) n = c;

    return n;
}

int sum(int a, int b, int c) {

    return  a + b + c;
}
