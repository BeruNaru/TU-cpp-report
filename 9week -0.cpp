#include<iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();

	Circle& refd = circle;
	refd.setRadius(20);
	cout << refd.getArea() << " " << circle.getArea();

	Circle* p = &circle;
	p->setRadius(30);
	cout << p->getArea() << " " << circle.getArea();

}
