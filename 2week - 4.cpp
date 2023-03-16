#include <iostream>
#include <string>

using namespace std;

int main() {
    string department, name, student_id, gender, address;
    int age;

    cout << "학과: ";
    getline(cin, department);
    cout << "성명: ";
    getline(cin, name);
    cout << "학번: ";
    getline(cin, student_id);
    cout << "나이: ";
    cin >> age;
    cin.ignore(); // 버퍼 비우기
    cout << "성별: ";
    getline(cin, gender);
    cout << "주소: ";
    getline(cin, address);

    cout << "학과: " << department << endl;
    cout << "성명: " << name << endl;
    cout << "학번: " << student_id << endl;
    cout << "나이: " << age << endl;
    cout << "성별: " << gender << endl;
    cout << "주소: " << address << endl;

    return 0;
}
