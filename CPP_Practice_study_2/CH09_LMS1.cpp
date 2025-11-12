#include <iostream>
using namespace std;

class Calculator {
public:
	void input() {
		cout << "정수 2개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) {
		return a + b;
	}
};

class subraction : public Calculator {
	int calc(int a, int b) {
		return a - b;
	}
};

class Multiplier : public Calculator {
	int calc(int a, int b) {
		return a * b;
	}
};

class Divider : public Calculator {
	int calc(int a, int b) {
		return a / b;
	}
};

int main() {
	int choice;

	Calculator* calc = nullptr;

	while (true) {
		cout << "1.덧셈\n2.뺄셈\n3.곱셉\n4.나놋셈\n0.종료\n>>";
		cin >> choice;
			switch (choice) {
		case 1:
			calc = new Adder();
			break;
		case 2:
			calc = new subraction();
			break;
		case 3:
			calc = new Multiplier();
			break;
		case 4:
			calc = new Divider();
			break;
		case 0:
			return 0;
		}
		calc->run();

		delete calc;
		calc = nullptr;
	}
}