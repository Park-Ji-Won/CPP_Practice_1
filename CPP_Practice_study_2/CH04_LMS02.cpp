#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle(){}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
}