#include <iostream>
#include "calculator.h"

void printCalculatorMenu();

void printCalculatorMenu() {
	std::cout << "\n===== 간단한 C++ 계산기 =====\n";
	std::cout << "+\t: 덧셈\n";
	std::cout << "-\t: 뺄셈\n";
	std::cout << "*\t: 곱셈\n";
	std::cout << "/\t: 나눗셈\n";
	std::cout << "\n=============================\n";
}

int main() {
	char op;
	double num1, num2;

	while (true) {
		printCalculatorMenu();
		std::cout << "원하는 연산자를 선택하세요(종료하려면 'q' 입력): ";
		std::cin >> op;

		if (op == 'q' || op == 'Q') {
			std::cout << "계산기를 종료합니다." << std::endl;
			break;
		}

		if (op != '+' && op != '-' && op != '*' && op != '/') {
			std::cout << "잘못된 연산자 입니다. +,-,*,/ 중에서 선택해주세요." << std::endl;
			std::cin.ignore(10000, '\n');
			continue;
		}

		std::cout << "두 개의 숫자를 띄어쓰기로 구분하여 쓰세요.: ";
		std::cin >> num1 >> num2;

		if (std::cin.fail()) {
			std::cout << "잘못된 입력입니다. 숫자만 입력해주세요." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		double result = 0.0;

		switch (op) {
		case '+':
			result = add(num1, num2);
			break;
		case '-':
			result = subtract(num1, num2);
			break;
		case '*':
			result = multiply(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
		}

		if (op != '/' || num2 != 0) {
			std::cout << "결과" << num1 << "" << op << "" << num2 << "=" << result << std::endl;
		}
		std::cout << "-----------------------------------------------" << std::endl;
	}

	return 0;
}