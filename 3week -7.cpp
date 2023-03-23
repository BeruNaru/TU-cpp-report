#include <iostream>
using namespace std;

class Circle {
public:
	int r;
	double getArea() {
		return 3.14 * r * r;
	}
	void  showCircle() {
		cout << "반지름:" << r << " ,";
		cout << "면적:" << getArea() << endl;
	}

};

int main() {

	Circle a, b;
	a.r = 10;
	b.r = 20;

	a.showCircle();
	b.showCircle();

	cout <<  "a원의 면적" << a.getArea() << endl;
	cout << "b원의 면적" << b.getArea() << endl;

	return 0;
  }
