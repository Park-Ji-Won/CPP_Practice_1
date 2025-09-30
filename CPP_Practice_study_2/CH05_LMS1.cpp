#include <iostream>
using namespace std;

void cValue(int arr[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << "cValue : " << sum << endl;
}
void cAddress(int* arr) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << "cAddress : " << sum << endl;
}
void cReference(int(&arr)[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << "cReference : " << sum << endl;
}

int main() {
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	cValue(arr);
	cAddress(arr);
	cReference(arr);

	return 0;
}