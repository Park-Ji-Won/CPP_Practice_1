#ifndef CALCULATOR.H

#include <iostream>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	if (b == 0) {
		std::cout << "오류: 0으로 나눌수 없습니다." << std::endl;
		return 0;
	}
	return a / b;
}

#endif 