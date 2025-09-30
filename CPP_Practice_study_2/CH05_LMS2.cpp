#include <iostream>
using namespace std;

class Point {
public:
	int x, y;
	Point(int a=0, int b=0): x(a),y(b){}
	void print() const {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

void cValue(Point p) {
	p.x += 10;
	p.y += 10;
	cout << "cValue : ";
	p.print();
}

void cAddress(Point* p) {
	p->x += 10;
	p->y += 10;
	cout << "cAddress : ";
	p->print();
}

void cReference(Point& p) {
	p.x += 10;
	p.y += 10;
	cout << "cReference : ";
	p.print();
}

int main() {

	Point p1(1, 2);

	cout << "초기 값 : ";
	p1.print();

	cValue(p1);
	cout << "Value 후 원본 값 : ";
	p1.print();

	cAddress(&p1);
	cout << "Address 후 원본 값 : ";
	p1.print();

	cReference(p1);
	cout << "Reference 후 원본 값 : ";
	p1.print();

	cValue(p1);
	cAddress(&p1);
	cReference(p1);

	return 0;
}