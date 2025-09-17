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

	cout << "주소를 입력하시오: ";
	char address[100];
	while (getchar() != '\n');
	cin.getline(address, 100);

	cout << "전화번호를 입력하세요: ";
	char phone[30];
	cin >> phone;

	cout << endl;
	cout << "입력된 현 정보" << endl;
	cout << "이름: " << name << endl;
	cout << "나이: " << age << "세" << endl;
	cout << "주소: " << address << endl;
	cout << "전화번호: " << phone << endl;
}