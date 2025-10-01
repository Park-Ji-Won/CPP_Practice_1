#include <iostream>
using namespace std;

#include "CH03_LMS02_Rectangle.h"

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())cout << "rect1은 정사각형 이다" << endl;
	if (rect2.isSquare())cout << "rect2은 정사각형 이다" << endl;
	if (rect3.isSquare())cout << "rect3은 정사각형 이다" << endl;
}