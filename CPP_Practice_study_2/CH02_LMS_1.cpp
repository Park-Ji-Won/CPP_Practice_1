#include <iostream>
using namespace std;

int main() {
	cout << "개인정보관리 프로그램" << endl;
	cout << endl;

	cout << "이름을 입력하세요: ";
	char name[20];
	cin >> name;

	cout << "나이를 입력하세요: ";
	int age;
	cin >> age;

	cout << endl;
	cout << "입력된 정보" << endl;
	cout << "이름: " << name << endl;
	cout << "나이: " << age << " 세" << endl;
}