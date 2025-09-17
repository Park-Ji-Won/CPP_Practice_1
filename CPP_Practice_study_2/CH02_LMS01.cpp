#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int start, end;

	cout << "2보다 크고 10보다 작은 수" << endl;
	cin >> num1;
	cout << "2보다 크고 10보다 작은 수" << endl;
	cin >> num2;

	if (num1 < num2) {
		start = num1;
		end = num2;
	}
	else {
		start = num2;
		end = num1;
	}

	for (int i = 1; i <= 9; i++) {
		for (int dan = start; dan <= end; dan++) {
			cout << dan << 'X' << i << "=" << (dan * i);
			if (dan < end)cout << "\t";
		}
		cout << endl;
	}
}