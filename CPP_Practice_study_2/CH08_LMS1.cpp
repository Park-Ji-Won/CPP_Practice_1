#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

class NamedCircle : public Circle {
private:
	string name;
public:
	NamedCircle() {
		name = "";
	}
	NamedCircle(int r, string n) :Circle(r) {
		name = n;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 "
			<< name << "의 면적은 " << getArea() << endl;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
};

string biggest(NamedCircle p[], int n) {
	int maxIndex = 0;

	for (int i = 1; i < n; i++) {
		if (p[i].getArea() > p[maxIndex].getArea()) {
			maxIndex = i;
		}
	}
	return p[maxIndex].getName();
}

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();

	cout << "5개의 정수 반지름과 피자 이름을 입력하세요" << endl;

	NamedCircle pizza[5];

	for (int i = 0; i < 5; i++) {
		int radius;
		string name;

		cout << i + 1 << ">> ";
		cin >> radius >> name;

		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	string largestPizza = biggest(pizza, 5);
	cout << "가장 큰 피자는 " << largestPizza << endl;

	return 0;
}