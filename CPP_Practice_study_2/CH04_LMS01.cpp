#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle cArray[3];

	for (int i = 0; i < 3; i++) {
		cArray[i].setRadius((i + 1) * 10);
		cout << "cArray[] " << i << "index 반지름: " << (i + 1) * 10
			<< " 넓이 " << cArray[i].getArea() << endl;
	}

	Circle* p;
	p = cArray;

	for (int i = 0; i < 3; i++) {
		cout << "포인터 1 방법: " << i << " 의 면적: "
			<< p[i].getArea() << endl;
		cout << "포인터 2 방법: " << i << " 의 면적: "
			<< (p + i)->getArea() << endl;
	}
}