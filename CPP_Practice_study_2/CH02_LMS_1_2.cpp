#include <iostream>
using namespace std;

int main() {
	cout << "개인정보 관리 프로그램" << endl;
	cout << endl;

	cout << "이름을 입력하세요: ";
	char name[20];
	cin >> name;

	cout << "나이를 입력하세요: ";
	int age;
	cin >> age;

	cout << "주소를 입력하세요: ";
	char address[100];
	cin.ignore();//이전 입력의 개행문자(엔터) 제거
	cin.getline(address, 100);

	cout << "전화번호를 입력하세요: ";
	char phone[20];
	cin >> phone;

	cout << endl;
	cout << "입력된 정보" << endl;
	cout << "이름: " << name << endl;
	cout << "나이: " << age << "세" << endl;
	cout << "주소: " << address << endl;
	cout << "전화번호: "<< phone << endl;
}