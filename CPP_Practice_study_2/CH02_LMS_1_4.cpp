#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	cout << "개인 정보 관리 프로그램" << endl;
	cout << endl;

	cout << "이름을 입력하세요: ";
	char name[30];
	cin >> name;

	cout << "나이를 입력하세요: ";
	int age;
	cin >> age;

	cout << "주소를 입력하세요: ";
	char address[100];
	while (getchar() != '\n');
	cin.getline(address, 100);

	cout << "전화번호를 입력하세요: ";
	char phone[30];
	cin >> phone;

	cout << "(CM)키를 입력하세요: ";
	double height;
	cin >> height;

	cout << "(KG)몸무게를 입력하세요: ";
	double weight;
	cin >> weight;

	double bmi = weight / ((height / 100) * (height / 100));

	cout << endl;
	cout << "입력된 정보" << endl;
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
	cout << "주소: " << address << endl;
	cout << "전화번호: " << phone << endl;
	cout << "키(CM): " << height << endl;
	cout << "몸무게(KG): " << weight << endl;
	cout << "BMI:	" << bmi << endl;

	cout << endl;
	cout << "BMI 판정" << endl;

	if (bmi < 18.5) {
		cout << "판정: 저체중입니다." << endl;
	}
	else if (bmi < 25) {
		cout << "판정: 정상체중입니다." << endl;
	}
	else if (bmi < 30) {
		cout << "판정: 과체중입니다." << endl;
	}
	else {
		cout << "판정:비만입니다." << endl;
	}
}