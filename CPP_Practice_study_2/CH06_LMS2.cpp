#include <iostream>
#include <iomanip>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size) {
		for (int i = 0; i < size; i++) {
			dest[i] = (double)source[i];
		}
	}

	static void doubleToInt(double source[], int dest[], int size) {
		for (int i = 0; i < size; i++) {
			dest[i] = (int)source[i];
		}
	}
};

int main() {
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9,8.8,7.7,6.6,5.6 };
	int w[5];

	ArrayUtility::intToDouble(x, y, 5);
	ArrayUtility::doubleToInt(z, w, 5);

	cout << "실수변환 " << fixed << setprecision(1);
	for (int i = 0; i < 5; i++) {
		cout << y[i] << " ";
	}
	cout << endl;

	cout << "정수변환 ";
	for (int i = 0; i < 5; i++) {
		cout << w[i] << " ";
	}
	cout << endl;

	return 0;
}