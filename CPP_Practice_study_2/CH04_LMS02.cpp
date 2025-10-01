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

int main() {
	int n;

	cout << "생성하고자 하는 원의 개수 : ";
	cin >> n;

	if (n < 0) {
		cout << "프로그램을 종료합니다." << endl;
		return 0;
	}

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		int r;
		cout << "반지름 " << i + 1 << " : ";
		cin >> r;
		pArray[i].setRadius(r);
	}

	for (int i = 0; i < n; i++) {
		double area = pArray[i].getArea();

		cout << pArray[i].getArea() << "\t";
		cout << (pArray + i)->getArea() << endl;

		//if (area >= 100 && area <= 200) {
			//cout << pArray[i].getArea() << "\t";
			//cout << (pArray + i)->getArea() << endl;
		//}
	}

	delete[] pArray;
}